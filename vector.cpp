#include <iostream>
#include <vector>
using namespace std;
int main() {
    // 创建一个空的vector
    vector<int> vec;

    // 添加元素
    // 向量名.push_back(元素)
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // 访问元素
    // 向量名[下标] 向量名.at(下标)
    cout << "第一个元素: " << vec[0] << endl;
    cout << "第二个元素: " << vec.at(1) << endl;

    // 修改元素
    vec[0] = 10;
    cout << "修改后的第一个元素: " << vec[0] << endl;

    // 删除最后一个元素
    vec.pop_back();
    cout << "删除最后一个元素后，大小: " << vec.size() << endl;

    // 插入元素
    vec.insert(vec.begin() + 1, 20);
    cout << "插入元素后的第二个元素: " << vec[1] << endl;

    // 删除指定位置的元素
    vec.erase(vec.begin() + 1);
    cout << "删除指定位置元素后的第二个元素: " << vec[1] << endl;

    // 清空vector
    vec.clear();
    cout << "清空vector后的大小: " << vec.size() << endl;

    // 检查vector是否为空
    if (vec.empty()) {
        cout << "vector是空的" << endl;
    }

    // 重新添加元素
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    // 遍历vector
    cout << "遍历vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // 使用迭代器遍历vector
    cout << "使用迭代器遍历vector: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}