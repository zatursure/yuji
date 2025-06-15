#include<bits/stdc++.h>
using namespace std;
vector<int>G[105];
int a[105][105];
bool vis[105];
int n,m;
void DFS(int x){
    cout<<x<<" ";
    vis[x]=1;
    for(int i=1;i<=n;i++){
        if(a[x][i]&&!vis[i]) DFS(i);
    }
}
int main(){
    cin>>n>>m;
    while(m--){
        int x,y;
        cin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
    DFS(0);
    return 0;
}