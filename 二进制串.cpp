#include<bits/stdc++.h>
using namespace std;
const long long MOD = 99999991239959;
long long qPow(long long x, long long y) {
    long long ans = 1;
    while (y > 0) {
        if (y & 1) ans = (ans * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return ans;
}
int main() {
    long long n;
    cin >> n;
    cout << qPow(2, n) << endl;
    return 0;
}