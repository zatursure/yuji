#include<bits/stdc++.h>
using namespace std;
vector<int>em[1000005];
int w[1000005];
int jinyi(int u) {
    set<int>s;
    int sum=0;
    for(auto v:em[u]){
        for(auto x:em[v]){
            if(u!=x) s.insert(x);
        }
    }
    for(auto x:s) sum+=w[x];
    return sum;
}
int main() {
    int u,v,n;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>w[i];
    for(int i=1;i<n;i++){
        cin>>u>>v;
        em[u].push_back(v);
        em[v].push_back(u);
    }
    for(int i=1;i<=n;i++) cout<<jinyi(i)<<" ";
    return 0;
}