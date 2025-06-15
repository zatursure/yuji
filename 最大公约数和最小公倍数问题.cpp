#include <bits/stdc++.h>
using namespace std;
long long m,n,cnt;
int main(){
    cin>>m>>n;
    if(m==n){
        cnt--;
    }
    n*=m;
    for(long long i=1;i<=(sqrt(n));i++){
        if(n%i==0&&__gcd(i,n/i)==m){
            cnt+=2;
        }
    }
    cout<<cnt;
}