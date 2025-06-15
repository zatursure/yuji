#include <bits/stdc++.h>
using namespace std;
int read(){
    int x=0,f=1;
    char ch=getchar();
    while (ch<'0'||ch>'9'){
        if(ch=='-') f=1;
        ch=getchar();
    }
    while(ch>='0'&&ch<='9'){
         x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    return x*f;
}
int main(){
    priority_queue<long long,vector<long long>,greater<long long>>Q;
    long long n=read(),ans=0;
    for(int i=1;i<=n;i++) Q.push(read());
    for(int i=1;i<=n-1;i++){
        long long n=Q.top();
        Q.pop();
        long long m=Q.top();
        Q.pop();
        Q.push(n+m);
        ans+=n+m;
    }
    cout<<ans;
}