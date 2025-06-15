#include <bits/stdc++.h>
using namespace std;
struct Point{
    long long w,v;
    bool operator < (const Point p) const{
        return v>p.v;
    }
}p[10005];
int main(){
    int W,T,em=0;
    cin>>W>>T;
    for(int i=1;i<=T;i++) cin>>p[i].w>>p[i].v;
    sort(p+1,p+T+1);
    int cnt=1;
    while(W>0){
        if(W>=p[cnt].w){
            em+=p[cnt].w * p[cnt].v;
            W-=p[cnt].w;
        }
        else{
            em+=W * p[cnt].v;
            break;
        }
        cnt++;
    }
    cout<<em;
}