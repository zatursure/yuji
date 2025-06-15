/*
单人 a 元
双人 b 元

T个样例
有 n 个学生
输入 n，a，b

*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b,ans=0;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        ans=0;
        if(3*a<=b) ans=a*n;
        else ans=(n/3)*b+(min((n%3)*a,b));
        cout<<ans<<endl;
    }
    return 0;
}