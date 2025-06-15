// #include <iostream>
// #include <vector>
// #include <algorithm>

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, T;
    cin >> N >> T; // 读取广场的边长N和树的数量T
    vector<vector<int>> grid(N, vector<int>(N, 0)); // 初始化N×N的广场，0表示没有树

    // 读取每棵树的坐标并在网格中标记
    while (T--) {
        int x, y;
        cin >> x >> y; // 读取树的坐标
        grid[x-1][y-1] = 1; // 标记树的位置，注意坐标从1开始，因此需要减1
    }

    vector<vector<int>> dp(N, vector<int>(N, 0)); // 动态规划数组，dp[i][j]表示以(i, j)为右下角的最大正方形边长
    int maxSide = 0; // 记录最大正方形的边长

    // 填充动态规划数组
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (!grid[i][j]) { // 如果当前位置没有树
                if (i == 0 || j == 0) {
                    dp[i][j] = 1; // 边界上的方格只能形成边长为1的正方形
                } else {
                    // 当前位置的最大正方形边长取决于其左、上、左上的最小值加1
                    dp[i][j] = min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]}) + 1;
                }
                maxSide = max(maxSide, dp[i][j]); // 更新最大边长
            }
        }
    }

    cout << maxSide << endl; // 输出最大正方形边长
    return 0;
}