#include <bits/stdc++.h>
using namespace std;
string s;
int main(){
    int n;
    cin>>s;
    cin>>n;
    while(n--){
        for(int i=0;i<s.size();i++){
            int len=s.size();
            if(s[0]>s[1]){
                s.erase(s[0]);
                break;
            }
            else if(s[i]>s[i+1]&&s[i]>s[i-1]){
                s.erase(s[i]);
                break;
            }
            else if(s[len-1]>s[len-2]){
                s.erase(s[len-1]);
                break;
            }
        }
    }
    cout<<s;
    return 0;
}