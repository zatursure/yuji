#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>G[100005];
bool v[100005];
int n,m;
void BFS(ll x){
    queue<ll>Q;
    Q.push(x);
    v[x]=true;
    while(Q.size()){
        ll f=Q.front();
        Q.pop();
        for(auto k:G[f]){
            if(!v[k]){
                Q.push(k);
                v[k]=1;
            }
        }
    }
}
signed main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        ll u,v;
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
        sort(G[u].begin(),G[u].end());
        sort(G[v].begin(),G[v].end());
    }
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(!v[i]){
            BFS(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}