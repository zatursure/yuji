#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin>>n>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    while(m<=0) {
        int num,cnt=0;
        cin>>num;
        for(int i=0;i<n;i++){
            if(arr[i]==num) cnt++;
        }
        cout<<cnt<<endl;
        m--;
    }
    return 0;
}
