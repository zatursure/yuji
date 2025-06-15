#include <bits/stdc++.h>
using namespace std;
long long n;
int check(int a,int b,int c,int d){return a*a+b*b+c*c+d*d;}
int main(){
    cin>>n;
    for(int i=0;;i++){
        if(check(i,i,i,i)>n) break;
        for(int j=i;;j++){
            if(check(i,j,j,j)>n) break;
                for(int k=j;;k++){ 
                    if(check(i,j,k,k)>n) break;
                    else{
                        int s=sqrt(n-check(i,j,k,0));
                        if(check(i,j,k,s)==n) return cout<<i<<" "<<j<<" "<<k<<" "<<s,0;
                    }
                }
        }
    }
}