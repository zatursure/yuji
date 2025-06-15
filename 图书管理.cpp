#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;
    int n;
    cin>>n;
    string cmd,B;
    for(int i=0;i<n;i++) {
        cin>>cmd>>B;
        if(cmd=="add") s.insert(B);
        else if(cmd=="find") cout<<(s.count(B) ? "yes":"no")<<endl;
    }
    return 0;
}