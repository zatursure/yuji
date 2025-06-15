#include<bits/stdc++.h>
using namespace std;
vector<int>G[101];
bool vis[101];
int k,m;
void BFS(int x){
    queue<int>Q;
    Q.push(x);
    vis[x]=1;
    while(Q.size()){
        int f=Q.front();
        Q.pop();
        cout<<f<<" ";
        for(auto v:G[f]){
            if(!vis[v]){
                Q.push(v);
                vis[v]=1;
            }
        }
    }
}

int main(){
    cin>>k>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=0;i<k;i++) sort(G[i].begin(),G[i].end());
    BFS(0);
    return 0;
}