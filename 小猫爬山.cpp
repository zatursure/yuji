#include<bits/stdc++.h>
using namespace std;
int a[50],b[50],w;
vector<int> A,B;
void DFS(int x,long long sum,int n,int *a,vector<int> &vec){
    if(sum>w) return;
    if(x==n){
        vec.push_back(sum);
        return;
    }
    DFS(x+1,sum,n,a,vec);
    DFS(x+1,sum+a[x],n,a,vec);
}
int main(){
    int n;
    cin>>w>>n;
    int N=n/2;
    n-=N;
    for(int i=0;i<N;i++) cin>>a[i];
    DFS(0,0,N,a,A);
    for(int i=0;i<n;i++) cin>>b[i];
    DFS(0,0,n,b,B);
    sort(B.begin(),B.end());
    int ans=0;
    for(int &x:A){
        int y=upper_bound(B.begin(),B.end(),w-x)-B.begin()-1;
        ans=max(ans,B[y]+x);
    }
    cout<<ans<<endl;
}