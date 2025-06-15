#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll d[1000][1000];
int main(){
    int n,m,a,b,v;
    cin>>n>>m;
    memset(d,0x3f,sizeof(d));
    for(int i=1;i<=n;i++) d[i][i]=0;
    while(m--){
        cin>>a>>b>>v;
        d[a][b]=d[b][a]=min(d[a][b],(ll)v);
    }
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
            }
        }
    }
    if(d[1][n]>=0x3f3f3f3f3f3f3f3f) cout<<-1;
    else cout<<d[1][n];
    return 0;
}