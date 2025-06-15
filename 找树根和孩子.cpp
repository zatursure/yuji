#include <bits/stdc++.h>
using namespace std;
long long n, m, father[10005], ans[10005], I;
int main(){
    vector<int> a;
    cin >> n >> m;
    while (m--){
        int x, y;
        cin >> x >> y;
        father[y] = x;
        ans[x]++;
    }
    for (int i = 1; i <= n; i++) if (father[i] == 0) cout << i << endl;
    for (int i = 1; i <= n; i++) if (ans[i] > ans[I]) I = i;
    cout << I << endl;
    for (int i = 1; i <= n; i++) if (father[i] == I) cout << i << " ";
    return 0;
}