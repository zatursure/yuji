/*
-----------------------------------------------------------------
Name:
大蛋糕
-----------------------------------------------------------------
Github:
https://github.com/zatursure/yuji/blob/main/大蛋糕.cpp
-----------------------------------------------------------------
Description:
Mas 购买了一个长为h宽为w的矩阵蛋糕
现在 Mas 准备在垂直于蛋糕左侧切n刀,其中第i刀距离顶部的距离为yi
无聊的 Mas 又准备在垂直于蛋糕顶部切m刀,其中第i刀距离左侧的距离为xi
切完n+m刀后,蛋糕将会被分成个矩形小蛋糕
现在 MasMas 想要知道最大的蛋糕面积为多少
-----------------------------------------------------------------
Author:
Zatursure
-----------------------------------------------------------------
Time:
2025-06-30
-----------------------------------------------------------------
Editor:
Visual Studio Code with Cpp File Formater 1.2.8
Compiler:
mysy2 with MinGW-gcc-11.2.0
-----------------------------------------------------------------
*/
#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int b[1000005];
int main()
{
    int h, w, n, m, maxh = 0, maxw = 0;
    cin >> h >> w >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    a[0] = 0;
    a[n + 1] = h;
    b[0] = 0;
    b[m + 1] = w;
    sort(a, a + n + 2);
    sort(b, b + m + 2);
    for (int i = 1; i <= n + 1; i++)
        maxh = max(maxh, a[i] - a[i - 1]);
    for (int i = 1; i <= m + 1; i++)
        maxw = max(maxw, b[i] - b[i - 1]);
    printf("%lld\n", 1LL * maxh * maxw);
    return 0;
}
