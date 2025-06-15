#include <iostream>
#include <map>
#include <string>
using namespace std;

// 展示如何使用map容器
void mapExample() {
    // 创建一个空的map，键为string类型，值为int类型
    map<string, int> exampleMap;

    // 插入元素
    exampleMap["apple"] = 1; // 插入键值对 ("apple", 1)
    exampleMap["banana"] = 2; // 插入键值对 ("banana", 2)
    exampleMap["cherry"] = 3; // 插入键值对 ("cherry", 3)

    // 通过键访问元素
    cout << "apple: " << exampleMap["apple"] << endl; // 输出 apple 的值
    cout << "banana: " << exampleMap["banana"] << endl; // 输出 banana 的值

    // 检查键是否存在
    if (exampleMap.find("cherry") != exampleMap.end()) {
        cout << "cherry is in the map" << endl; // 如果 cherry 存在，输出提示信息
    }

    // 遍历map
    for (const auto& pair : exampleMap) {
        cout << pair.first << ": " << pair.second << endl; // 输出每个键值对
    }

    // 删除元素
    exampleMap.erase("banana"); // 删除键为 banana 的元素

    // 检查删除后的map
    cout << "After erasing banana:" << endl;
    for (const auto& pair : exampleMap) {
        cout << pair.first << ": " << pair.second << endl; // 输出删除后的键值对
    }
}

// 展示如何使用map的其他功能
void mapAdvancedExample() {
    map<string, int> exampleMap;

    // 插入元素
    exampleMap.insert(make_pair("date", 4)); // 使用insert方法插入键值对
    exampleMap.insert({"elderberry", 5}); // 使用初始化列表插入键值对

    // 查找元素
    auto it = exampleMap.find("date");
    if (it != exampleMap.end()) {
        cout << "Found date: " << it->second << endl; // 找到元素并输出其值
    }

    // 获取map的大小
    cout << "Map size: " << exampleMap.size() << endl; // 输出map的大小

    // 清空map
    exampleMap.clear();
    cout << "Map cleared, size: " << exampleMap.size() << endl; // 清空map并输出其大小
}

int main() {
    mapExample(); // 调用示例函数
    mapAdvancedExample(); // 调用高级示例函数
    return 0;
}
