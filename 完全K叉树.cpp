#include<bits/stdc++.h>
using namespace std;
vector<int>check(int x){
    vector<int>ans;
    while(x >= 1) {
        ans.push_back(x);
        x = x/2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    vector<long long>vec(n + 1, 0);
    while(m--){
        int flag,x,y;
        scanf("%d %d %d", &flag, &x, &y);
        vector<int>ans;
        ans=check(x);
        vector<bool>b(n+1,0);
        for(int ck:ans) b[ck]=true;
        if(flag==1) for(int ck:ans) vec[ck] += y;
        else for(int i=1;i<=n;i++) if(!b[i]) vec[i] += y;
    }
    for(int i=1;i<=n;i++) cout<<vec[i]<<" ";
    return 0;
}