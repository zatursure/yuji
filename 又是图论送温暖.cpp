#include<bits/stdc++.h>
using namespace std;
int cnt[100005];
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b]++;
    }
    for(int i = 1; i <= n; i++) {
        cout << cnt[i] << endl;
    }
    return 0;
}