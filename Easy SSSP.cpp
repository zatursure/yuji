#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = 0x3f3f3f3f3f3f3f3f;
struct Edge{
    int from,to;
    ll w;
};
int main(){
    int n,m,s;
    cin>>n>>m>>s;    
    vector<Edge>edge(m);
    vector<ll>dist(n+1,INF);
    for(auto e:edge) cin>>e.from>>e.to>>e.w;
    dist[s]=0;
    for(int i=1;i<=n;i++){
        for(auto e:edge){
            if(dist[e.from]!=INF&&dist[e.to]>dist[e.from]+e.w){
                if(i==n){
                    cout<<-1;
                    return 0;
                }
                dist[e.to]=dist[e.from]+e.w;
            }
        }
    }
    for(int i=1;i<=n;i++) cout<<(dist[i]==INF?"NoPath":to_string(dist[i]))<<endl;
    return 0;
}