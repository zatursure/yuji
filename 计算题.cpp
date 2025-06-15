#include<bits/stdc++.h>
using namespace std;
const int mod=1000000007;
unsigned long long a=0,n=0,ans=0,sum=0,tmp=1;
int main(){
    cin>>a>>n;
    for(int i=0;i<=n;i++){
        sum=(sum+tmp)%mod;
        tmp=(tmp*a)%mod;
    }
    ans=((a-1)*sum)%mod;
    if(ans<0) ans+=mod;
    cout<<ans<<endl;
    return 0;
}