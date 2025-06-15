#include<bits/stdc++.h>
using namespace std;
int n,ans[105],vis[105];
int status;
bool isPrime(int x){
    for(int i=2;i*i<=x;i++)
    if(x%i==0) return 0;
    return x>1;
}
void DFS(int x){
    if(x==n+1){
        if(isPrime(ans[n]+1)){
            status=1;
            for(int i=1;i<=n;i++) cout<<ans[i]<<" \n"[i==n];
        }
        return;
    }
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            ans[x]=i;
            vis[i]=1;
            if(isPrime(ans[x-1]+i)) DFS(x+1);
            vis[i]=0;
        }
    }
}
int main(){
    cin>>n;
    vis[1]=1;
    ans[1]=1;
    DFS(2);
    if(status==0) cout<<"no answer";
}