#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN = 500005;
ll n, a, b;
ll w[MAXN];
bool check(ll mid) {
    ll t = mid;
    for(int i = 0; i < n; i++) {
        ll tmp = w[i];
        tmp -= mid * a;
        if(tmp <= 0) continue;
        ll nt = (tmp + b - 1) / b;
        if(nt > t) return false;
        t -= nt;
    }
    return true;
}
int main(){
    cin >> n >> a >> b;
    ll maxw = 0;
    for(int i = 0; i < n; i++) {
        cin >> w[i];
        maxw = max(maxw, w[i]);
    }
    ll L = 0;
    ll R = maxw * 2;
    while(L < R) {
        ll mid = (L + R) / 2;
        if(check(mid)) R = mid;
        else L = mid + 1;
    }
    cout << L << endl;
    return 0;
}