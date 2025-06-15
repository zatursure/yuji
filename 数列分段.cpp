#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    int em=0,d=0;
    cin>>n>>m;
    int a[n+100];
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++){
        d+=a[i];
        if(d>m){
            em++;
            d=a[i];
        }
    }
    em+=1;
    cout<<em;
    return 0;
}