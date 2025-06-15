#include<bits/stdc++.h>
using namespace std;
long long a[100005],sum[100005];
int main(){
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>sum[i];
        a[i]=sum[i]-sum[i-1];
        cout<<a[i]<<" ";
    }
    return 0;
}