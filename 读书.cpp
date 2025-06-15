#include<bits/stdc++.h>
using namespace std;
int n,x,y,m,day=0;
int main(){
    cin>>n>>x>>y;
    while(n!=0){
        if(m>n){
            break;
        }
        m+=x;
        day++;
        x+=y;
    }
    cout<<day;
}