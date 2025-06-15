#include <iostream>
#include <cstdio>
using namespace std;

const int MAXN = 20001;
int parent[MAXN];

// 初始化并查集
void init(int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
}

int find(int x) {
    return parent[x] == x ? x : (parent[x] = find(parent[x]));
}

void union_set(int x, int y) {
    parent[find(x)] = find(y);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, q;
    if(!(cin >> n >> m)) return 1;
    init(n);

    for (int i = 0; i < m; i++) {
        int x, y;
        if(!(cin >> x >> y)) {
            return 1;
        }
        union_set(x, y);
    }

    if(!(cin >> q)) {
        return 1;
    }
    
    for (int i = 0; i < q; i++) {
        int x, y;
        if(!(cin >> x >> y)) {
            return 1;
        }
        cout << (find(x) == find(y) ? "Yes\n" : "No\n");
    }
    
    return 0;
}
