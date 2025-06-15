#include<bits/stdc++.h>
using namespace std;
const int MAXNNNNNN=1e5+5;
int p[MAXNNNNNN];
int sizee[MAXNNNNNN];

void init(int n){
    for(int i=1;i<=n;i++) {
        p[i]=i;
        sizee[i]=1;\
    }
}

int find(int x){
    if(x==p[x]) return x;
    return p[x]=find(p[x]);
}

void merge(int a,int b){
    int fa = find(a);
    int fb = find(b);
    if(fa != fb) {
        p[fa] = fb;
        sizee[fb] += sizee[fa];
    }
}

bool judge(int a,int b){
    return find(a)==find(b);
}

int getsizee(int x){
    return sizee[find(x)];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m,x,y,rx,ry,em;
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
        if(c=='C'){
            cin>>em;
            cout<<getsizee(em)<<endl;
        }
    }
    return 0;
}