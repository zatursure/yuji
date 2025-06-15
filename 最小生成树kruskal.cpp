#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5005,MAXM = 200005;
int n, m, fa[MAXN];
struct Edge{int u,v,w; bool operator<(const Edge&o)const{return w<o.w;}}e[MAXM];
int find(int x){return fa[x]==x?x:fa[x]=find(fa[x]);}
int kruskal(){
    for(int i=1;i<=n;i++)fa[i]=i;
    sort(e,e+m);
    int ans=0,cnt=0;
    for(int i=0;i<m&&cnt<n-1;i++){
        int fu=find(e[i].u),fv=find(e[i].v);
        if(fu!=fv)fa[fu]=fv,ans+=e[i].w,cnt++;
    }
    return ans;
}
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++)cin>>e[i].u>>e[i].v>>e[i].w;
    cout<<kruskal()<<endl;
    return 0;
}
