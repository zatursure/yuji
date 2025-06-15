#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <asio/asio.hpp>

using namespace std;
using asio::ip::tcp;

class LANChat {
public:
    LANChat();
    void start();
    void stop();
    void searchMembers();
    void chat();
    void disconnect();

private:
    void handleClient(tcp::socket socket);
    void sendMessage(const string& message);
    string receiveMessage();

    vector<thread> threads;
    mutex mtx;
    condition_variable cv;
    bool running;
    map<string, tcp::socket> members;
};

LANChat::LANChat() : running(false) {}

void LANChat::start() {
    running = true;
    thread([this]() {
        asio::io_context io_context;
        tcp::acceptor acceptor(io_context, tcp::endpoint(tcp::v4(), 12345));
        while (running) {
            tcp::socket socket(io_context);
            acceptor.accept(socket);
            lock_guard<mutex> lock(mtx);
            string member = socket.remote_endpoint().address().to_string();
            members[member] = move(socket);
            threads.emplace_back(&LANChat::handleClient, this, move(members[member]));
        }
    }).detach();
}

void LANChat::stop() {
    running = false;
    cv.notify_all();
    for (auto& t : threads) {
        if (t.joinable()) {
            t.join();
        }
    }
}

void LANChat::searchMembers() {
    lock_guard<mutex> lock(mtx);
    cout << "当前在线成员：" << endl;
    for (const auto& member : members) {
        cout << member.first << endl;
    }
}

void LANChat::chat() {
    string message;
    while (true) {
        cout << "> ";
        getline(cin, message);
        if (message == "断开连接") {
            disconnect();
            break;
        }
        sendMessage(message);
    }
}

void LANChat::disconnect() {
    lock_guard<mutex> lock(mtx);
    for (auto& member : members) {
        member.second.close();
    }
    members.clear();
}

void LANChat::handleClient(tcp::socket socket) {
    try {
        while (running) {
            string message = receiveMessage();
            if (!message.empty()) {
                cout << "收到消息：" << message << endl;
            }
        }
    } catch (exception& e) {
        cerr << "客户端处理错误：" << e.what() << endl;
    }
}

void LANChat::sendMessage(const string& message) {
    lock_guard<mutex> lock(mtx);
    for (auto& member : members) {
        asio::write(member.second, asio::buffer(message));
    }
}

string LANChat::receiveMessage() {
    char data[1024];
    size_t length = 0;
    lock_guard<mutex> lock(mtx);
    for (auto& member : members) {
        length = member.second.read_some(asio::buffer(data));
    }
    return string(data, length);
}

int main() {
    LANChat chat;
    chat.start();
    cout << "局域网聊天程序已启动。" << endl;
    while (true) {
        string command;
        cout << "输入命令（搜索成员/对话/断开连接/退出）：";
        getline(cin, command);
        if (command == "搜索成员") {
            chat.searchMembers();
        } else if (command == "对话") {
            chat.chat();
        } else if (command == "断开连接") {
            chat.disconnect();
        } else if (command == "退出") {
            chat.stop();
            break;
        }
    }
    return 0;
}
