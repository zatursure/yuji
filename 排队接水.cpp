#include <bits/stdc++.h>
using namespace std;
int n=0;
struct st{
    int a,b;
}a[200000];
bool cmp(st a,st b){
    if(a.b==b.b) return a.a<b.a;
    return a.b<b.b;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].b;
        a[i].a=i;
    }
    sort(a+1,a+n+1,cmp);
    for(int i=1;i<=n;i++){
       cout<<a[i].a<<" ";
    }
    cout<<"\n";
    long long su=0;
    for(int i=1;i<n;i++){
        su+=(a[i].b)*(n-i);
    }
    printf("%.2lf",(su*1.000)/n);
    return 0;
}