#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;
    cin>>n>>d;
    vector<int>p(n);
    set<int>ans;
    for(int i=0;i<n;i++) cin>>p[i];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(abs(p[i]-p[j])<d){
                ans.insert(i);
                ans.insert(j);
            }
        }
    }
    cout<<ans.size()<<endl;
    return 0;
}
