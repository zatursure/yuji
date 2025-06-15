#include<bits/stdc++.h>
using namespace std;
int main(){
    long long c[5000005],r[5000005];
    long long n,em=0,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>c[i]>>r[i];
    for(int i=1;i<=n;i++){
        em+=c[i];
        ans=max(ans,em)+r[i];
    }
    cout<<ans<<endl;
    return 0;
}