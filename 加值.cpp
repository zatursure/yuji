#include<bits/stdc++.h>
using namespace std;
int a[1000005],d[1000005],sum[1000005];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[i]=a[i]-a[i-1];
    }
    int T;
    cin>>T;
    while(T--){
        int L,R;
        cin>>L>>R;
        d[L]++;
        d[R+1]--;

    }
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1]+d[i];
        cout<<sum[i]<<" ";
    }
    return 0;
}