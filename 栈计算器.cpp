#include<bits/stdc++.h>
using namespace std;
stack<int> x;
stack<int> y;
int main(){
    int n,a,b,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        x.push(a);
    }
    for(int i=1;i<=n;i++){
        cin>>b;
        y.push(b);
    }
    while(x.empty()!=0){
        if(y.top()=='+'){
            ans+=x.top();
            x.pop();
            y.pop();
        }
        else if(y.top()=='-'){
            ans-=x.top();
            x.pop();
            y.pop();
        }
        else if(y.top()=='*'){
            ans*=x.top();
            x.pop();
            y.pop();
        }
        else if(y.top()=='/'){
            ans/=x.top();
            x.pop();
            y.pop();
            
        }
    }
    cout<<ans;
    return 0;
}