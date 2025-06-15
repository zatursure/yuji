#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n; // 输入一个正整数 n
    int count = 0; // 记录解的数量
    // 遍历所有可能的公鸡数量 x
    for (int x = 0; x <= n / 5; ++x) {
        // 遍历所有可能的母鸡数量 y
        for (int y = 0; y <= n / 3; ++y) {
            int z = n - x - y; // 计算小鸡的数量 z
            // 检查是否满足条件：小鸡数量是 3 的倍数，且总花费等于 n
            if (z % 3 == 0 && 5 * x + 3 * y + z / 3 == n) {
                ++count; // 满足条件则解的数量加一
            }
        }
    }
    // 输出结果，如果没有解则输出 "No answer"
    cout << (count == 0 ? "No answer" : to_string(count)) << endl;
    return 0;
}
