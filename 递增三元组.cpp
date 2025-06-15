#include <bits/stdc++.h>
using namespace std;
long long n,a[1000005],b[1000005],c[1000005],ans;
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    for (int i = 1; i <= n; i++) cin >> c[i];
    sort(a + 1, a + 1 + n);
    sort(c + 1, c + 1 + n);
    for (int j = 1; j <= n; j++) {
        long long cnta = lower_bound(a + 1, a + 1 + n, b[j]) - a - 1;
        long long cntc = upper_bound(c + 1, c + 1 + n, b[j]) - c;
        cntc = n - cntc + 1;
        ans += cnta * cntc;
    }
    cout << ans;
}