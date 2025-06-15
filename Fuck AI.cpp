#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Chatbot {
public:
    Chatbot();
    void greet();
    void farewell();
    void chat();

private:
    map<string, string> responses;
    void initializeResponses();
    string getResponse(const string& input);
    vector<string> tokenize(const string& str);
    string toLower(const string& str);
};

Chatbot::Chatbot() {
    initializeResponses();
}

void Chatbot::initializeResponses() {
    responses["hello"] = "Hello! How can I assist you today?";
    responses["goodbye"] = "Goodbye! Have a great day!";
    responses["how are you"] = "I'm just a program, but I'm running smoothly!";
    responses["what is your name"] = "I'm a chatbot here to assist you.";
    responses["what can you do"] = "I can chat with you and answer your questions.";
    responses["thank you"] = "You're welcome!";
    responses["who build you"] = "Zatursure is my creator.";
    responses["what c++ editer do you like"] = "I like Visual Studio Code.";
    // ...add more responses...
}

void Chatbot::greet() {
    cout << "Hello! I'm your assistant chatbot. How can I assist you today?" << endl;
}

void Chatbot::farewell() {
    cout << "Goodbye! Have a great day!" << endl;
}

void Chatbot::chat() {
    string input;
    while (true) {
        cout << "> ";
        getline(cin, input);
        string response = getResponse(input);
        cout << response << endl;
        if (input == "goodbye") {
            break;
        }
    }
}

string Chatbot::getResponse(const string& input) {
    string lowerInput = toLower(input);
    vector<string> tokens = tokenize(lowerInput);
    for (const auto& token : tokens) {
        if (responses.find(token) != responses.end()) {
            return responses[token];
        }
    }
    return "Sorry, I don't understand what you mean.";
}

vector<string> Chatbot::tokenize(const string& str) {
    vector<string> tokens;
    string token;
    for (char ch : str) {
        if (isspace(ch)) {
            if (!token.empty()) {
                tokens.push_back(token);
                token.clear();
            }
        } else {
            token += ch;
        }
    }
    if (!token.empty()) {
        tokens.push_back(token);
    }
    return tokens;
}

string Chatbot::toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    Chatbot chatbot;
    chatbot.greet();
    chatbot.chat();
    chatbot.farewell();
    return 0;
}
