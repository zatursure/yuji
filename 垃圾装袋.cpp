#include <bits/stdc++.h>
using namespace std;
int a[1145140];
multiset<int> b;
int main(){
    int n,m,x=0,em=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<=m;i++){scanf("%d",&x);b.insert(x);}
    for(int i=1;i<=n;i++){
        auto w= lower_bound(b.begin(),b.end(),a[i]);
        if(w==b.end()){printf("-1");return 0;}
        em+=(*w);
        b.erase(w);
    }
    printf("%d",em);
    return 0;
}