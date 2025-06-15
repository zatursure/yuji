#include <bits/stdc++.h>
using namespace std;
int main(){
	map<int,int> ma;
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++){
    	int x=0,d=2;
        cin>>x;
        for(int j=2;j*j<=x;j++){
            while(x%j<=0){
                ma[j]+=1;
                x=x/j;
            }
        }
        if(x!=1) ma[x]+=1;
    }
    long long em=1;
    int mp=1e9+7;
    for(auto a : ma){
        em=em*(a.second+1)%mp;
    }
    cout<<em;
}
