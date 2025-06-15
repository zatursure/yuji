#include<bits/stdc++.h>
using namespace std;
int n;
long long k;
int a[100005];

bool check(long long len) {
    if(len == 0) return false;
    long long sum = 0;
    for(int i = 0; i < n; i++) {
        sum += a[i] / len;
    }
    return (sum >= k);
}

int main() {
    cin >> n >> k;
    long long len = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        len = max(len, (long long)a[i]);
    }
    long long L = 0, R = len;
    long long ans = 0;
    while (L <= R) {
        long long mid = L + (R - L) / 2;
        if (check(mid)) {
            ans = mid;
            L = mid + 1;
        } else R = mid - 1;
    }
    cout << ans << endl;
    return 0;
}