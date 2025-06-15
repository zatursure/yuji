#include<bits/stdc++.h>
using namespace std;
int check(int n,int m,int k){
    if (k>n) return 0;
    int ans = 1;
    int h=k*m-(m-2);
    for (int cd=h;cd<(h+m)&&cd<=n;cd++) ans+=check(n,m,cd);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        // cout<<check(n,m,k)<<" ";
        printf("%d\n",check(n,m,k));
        // t--;
    }
    return 0;
}