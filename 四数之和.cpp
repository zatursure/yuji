#include <bits/stdc++.h>
using namespace std;
long long a[5050], b[5050], c[5050], d[5050], add[20000050];
int main() {
    long long m, aa, bb, cc, dd, ans = 0;
    cin >> m;
    cin >> aa;
    for (int i = 1; i <= aa; i++) cin >> a[i];
    cin >> bb;
    for (int i = 1; i <= bb; i++) cin >> b[i];
    cin >> cc;
    for (int i = 1; i <= cc; i++) cin >> c[i];
    cin >> dd;
    for (int i = 1; i <= dd; i++) cin >> d[i];
    for (int i = 1; i <= aa; i++) {
        for (int j = 1; j <= bb; j++) {
            if (m - a[i] - b[j] >= 0) add[m - a[i] - b[j]]++;
        }
    }
    for (int i = 1; i <= cc; i++) {
        for (int j = 1; j <= dd; j++) {
            if (add[c[i] + d[j]] > 0) ans += add[c[i] + d[j]];
        }
    }
    cout << ans;
    return 0;
}