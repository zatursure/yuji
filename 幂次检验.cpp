#include<bits/stdc++.h>
using namespace std;
long long tX;
bool ck(long long n){
    if(n<=1) return 0;
    for(long long x=2;x*x<=n;x++){
        double logn=log(n)/log(x);
        long long p=round(logn);
        long long z=1;
        for (int i=0;i<p&&z<=n;i++) z*=x;
        if(z==n){
            tX=x;
            return 1;
        }
    }
    return 0;
}
int main(){
    long long n;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>n;
        if(ck(n)==1) cout<<tX<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
}