#include <bits/stdc++.h>
using namespace std;
// 模板
long long f(long long a,long long b,long long m) {
    unsigned long long ans=1;
    a%=m;
    while(b>0) {
        if(b&1) ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout << f(a, b, m) << endl;
    return 0;
}



// 这段代码实现了计算 a 的 b 次方模 m 的值，使用快速幂算法。
// 输入格式：
// 三个整数 a, b, m，分别表示底数、指数和模数。
// 输出格式：
// 输出 a 的 b 次方模 m 的值。
// 示例输入：
// 2 10 1000
// 示例输出：
// 24
// 说明：
// 输入 2 的 10 次方模 1000 的结果是 24，因为 2^10 = 1024，1024 % 1000 = 24。
// 注意：
// 1. 输入的 a、b、m 都是非负整数，且 m > 0。
// 2. 如果 b = 0，按照数学定义，a^0 = 1（除非 a = 0，此时 0^0 通常也定义为 1）。
// 3. 如果 m = 1，任何数模 1 的结果都是 0，因为任何数除以 1 的余数都是 0。
// 4. 快速幂算法的时间复杂度为 O(log b)
// 5. 注意处理大数的情况，使用 long long 类型可以避免溢出问题。
// 6. 该算法适用于大范围的 a 和 b，能够高效计算大数的幂模。
// 7. 如果需要处理负数的情况，可以在计算前对 a 进行模 m 的处理，确保 a 在 [0, m-1] 范围内。