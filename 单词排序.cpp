#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    getline(cin,line);
    stringstream ss(line);
    string w;
    set<string>ws;
    while(ss>>w) ws.insert(w);
    bool flag=true;
    for(const auto&w:ws){
        if(!flag) cout<<" ";
        cout<<w;
        flag=false;
    }
    cout<<endl;
    return 0;
}
