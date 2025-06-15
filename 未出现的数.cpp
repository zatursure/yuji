#include<bits/stdc++.h>
using namespace std;
bool a[100000005];
int main(){
    int n,q,tmp;
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>a[i];
    int cnt=0;
    int tmp1=0;
    for(int i=1;i<=q;i++){
        cin>>tmp;
        for(int j=1;;j++){
            if(tmp1>=n||j<a[tmp1+1]){
                cnt++;
                if(cnt==tmp){
                    cout<<j<<endl;
                    break;
                }
            }
            else tmp1+=1;
            j++;
        }
    }
    return 0;
}