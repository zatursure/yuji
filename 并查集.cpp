#include<bits/stdc++.h>
using namespace std;
const int MAXNNNNNN=1e5+5;
int p[MAXNNNNNN];
void init(int n){
    for(int i=1;i<=n;i++) p[i]=i;
}
int find(int x){
    if(x==p[x]) return x;
    return p[x]=find(p[x]);
}
void merge(int a,int b){
    p[find(a)]=find(b);
}
bool judge(int a,int b){
    return find(a)==find(b);
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,y,rx,ry;
    cin>>n>>m;
    init(n);
    for(int i=1;i<=m;i++){
        char c;
        cin>>c;
        if(c=='M'){
            cin>>x>>y;
            merge(x,y);
        }
        if(c=='Q'){
            cin>>rx>>ry;
            if(judge(rx,ry)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}