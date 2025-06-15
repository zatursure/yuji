#include <bits/stdc++.h>
using namespace std;

long long k, n, m, ans;
bool vis[1005];
long long cow[105], f[1005];
vector<long long> vec[1005];

void DFS(long long s, long long x) {
    if (!vis[x]) {
        f[x]++;
    }
    vis[x] = true;
    for (auto c : vec[x]) {
        if (!vis[c]) {
            DFS(s, c);
        }
    }
}

int main() {
    cin >> k >> n >> m;
    for (long long i = 1; i <= k; i++) {
        cin >> cow[i];
    }
    
    while (m--) {
        long long x, y;
        cin >> x >> y;
        vec[x].push_back(y);
    }
    
    for (long long i = 1; i <= k; i++) {
        memset(vis, false, 1005);
        DFS(cow[i], cow[i]);
    }
    
    for (long long i = 1; i <= n; i++) {
        if (f[i] == k) {
            ans++;
        }
    }
    
    cout << ans;
    return 0;
}