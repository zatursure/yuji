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
