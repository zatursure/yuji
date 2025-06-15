#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100001;
int p[MAXN];
int sizee[MAXN];
void init(int n) {
    for (int i = 1; i <= n; i++) {
        p[i] = i;
        sizee[i] = 1;
    }
}
int find(int x) {
    if (p[x] == x) return x;
    return p[x] = find(p[x]);
}
void merge(int a, int b) {
    int rt_a = find(a);
    int rt_b = find(b);
    if (rt_a != rt_b) {
        p[rt_b] = rt_a;
        sizee[rt_a] += sizee[rt_b];
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    init(n);
    char op;
    int a, b;
    for (int i = 0; i < m; i++) {
        cin >> op;
        if (op == 'M') {
            cin >> a >> b;
            merge(a, b);
        } else if (op == 'Q') {
            cin >> a;
            cout << sizee[find(a)] << endl;
        }
    }
    return 0;
}
