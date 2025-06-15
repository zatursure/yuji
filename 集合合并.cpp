#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,t=0;
    cin>>n>>m;
    set<long long>s;
    for(int i=0;i<n;i++) cin>>t;s.insert(t);
    for(int i=0;i<m;i++) cin>>t;s.insert(t);
    for(const int&e:s) cout<<e<<" ";
    cout<<endl;
    return 0;
}
