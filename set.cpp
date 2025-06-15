#include <iostream>
#include <set>
using namespace std;

int main() {
    // 创建一个空的set容器
    // 使用场景：需要一个自动排序且不包含重复元素的集合
    set<int> mySet;

    // 插入元素
    // 使用场景：向集合中添加元素，自动排序且不允许重复
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);

    // 输出set中的元素
    // 使用场景：遍历集合中的所有元素
    cout << "Set 包含: ";
    for (const int& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // 查找元素
    // 使用场景：检查集合中是否存在某个特定元素
    auto it = mySet.find(20);
    if (it != mySet.end()) {
        cout << "找到元素 20." << endl;
    } else {
        cout << "未找到元素 20." << endl;
    }

    // 删除元素
    // 使用场景：从集合中移除某个特定元素
    mySet.erase(20);
    cout << "删除 20 后, set 包含: ";
    for (const int& elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // 获取set的大小
    // 使用场景：获取集合中元素的数量
    cout << "Set 的大小: " << mySet.size() << endl;

    // 检查set是否为空
    // 使用场景：判断集合是否为空
    if (mySet.empty()) {
        cout << "Set 是空的." << endl;
    } else {
        cout << "Set 不是空的." << endl;
    }

    // 清空set
    // 使用场景：移除集合中的所有元素
    mySet.clear();
    cout << "清空后, set 的大小: " << mySet.size() << endl;
    return 0;
}
