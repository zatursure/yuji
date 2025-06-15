#include<bits/stdc++.h>
using namespace std;
long long n,m,a[1000005],sum[1000005],ans;
map<long long,long long> mp;
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    mp[0]=1;
    for(int i=1;i<=n;i++){
        ans+=mp[sum[i]%m];
        mp[sum[i]%m]++;
    }
    cout<<ans<<endl;
    return 0;
}