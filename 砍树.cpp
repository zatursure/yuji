#include <bits/stdc++.h>
using namespace std;

long long N, M;
vector<long long>a;

bool check(long long height) {
    long long sum = 0;
    for(int i = 0; i < N; i++) {
        if(a[i] > height) {
            sum += a[i] - height;
        }
    }
    return (sum >= M);
}
int main() {
    cin >> N >> M;
    a.resize(N);
    long long maxh = 0;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
        maxh = max(maxh, a[i]);
    }
    long long L = 0, R = maxh;
    long long ans = 0;
    while(L <= R) {
        long long mid = L + (R - L) / 2;
        if(check(mid)) {
            ans = mid;
            L = mid + 1;
        }
        else R = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
