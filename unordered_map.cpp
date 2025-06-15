/*
 * unordered_map 是 C++ 标准库中的一个关联容器，它提供了键值对的哈希表实现。
 * 与 map 不同，unordered_map 使用哈希表来存储元素，因此元素的顺序是未定义的。
 * 这使得 unordered_map 在查找、插入和删除操作上具有平均常数时间复杂度。
 *
 * 主要特点：
 * 1. 快速查找：由于使用了哈希表，查找操作的平均时间复杂度为 O(1)。
 * 2. 无序存储：元素的存储顺序不是按插入顺序，也不是按键值排序。
 * 3. 唯一键：每个键在 unordered_map 中是唯一的。
 *
 * 常用操作：
 * 1. 插入元素：使用 insert() 或者通过下标操作符 []。
 * 2. 查找元素：使用 find() 或者通过下标操作符 []。
 * 3. 删除元素：使用 erase()。
 * 4. 大小：使用 size() 获取元素个数。
 * 5. 清空：使用 clear() 清空所有元素。
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 创建一个 unordered_map，键为字符串，值为整数
    unordered_map<string, int> umap;

    // 插入元素
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["cherry"] = 3;

    // 查找元素
    if (umap.find("banana") != umap.end()) {
        cout << "Found banana with value: " << umap["banana"] << endl;
    }

    // 遍历元素
    for (const auto& pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // 删除元素
    umap.erase("apple");

    // 获取大小
    cout << "Size of unordered_map: " << umap.size() << endl;

    // 清空所有元素
    umap.clear();
    cout << "Size after clear: " << umap.size() << endl;

    return 0;
}
