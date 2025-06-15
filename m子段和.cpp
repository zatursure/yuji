#include<bits/stdc++.h>
using namespace std;
long long a[100005],sum[100005];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    long long maxn=-1e14;
    for(int i=1;i<=n-m+1;i++){
        maxn=max(maxn,sum[i+m-1]-sum[i-1]);
    }
    cout<<maxn;
    return 0;
}