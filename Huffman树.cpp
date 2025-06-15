#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>>q;
int main() {
    int n,z;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>z;
        q.push(z);
    }
    int ans=0;
    while(q.size()>1){
        int x = q.top(); q.pop();
        int y = q.top(); q.pop();
        ans += x + y;
        q.push(x + y);
    }
    cout<<ans<<endl;
    return 0;
}