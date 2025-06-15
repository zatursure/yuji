#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
ll check(vector<ll>&a,vector<ll>&b,ll mid) {
    unsigned long long cnt=0;
    for(ll x:a){
        if(x>0) cnt+=upper_bound(b.begin(),b.end(),(mid/x))-b.begin();
    }
    return cnt;
}
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n);
    vector<ll>b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(b.begin(),b.end());
    ll L=a[0]*b[0];
    ll R=a[n-1]*b[m-1];
    while(L<R){
        ll mid=L+(R-L)/2;
        if(check(a,b,mid)<k)L=mid+1;
        else R=mid;
    }
    cout<<L;
    return 0;
}