#include <bits/stdc++.h>
using namespace std;
long long a[20000005],b[20000005];
void mergeSort(int L,int R){
    if(L==R) return;
    int mid=(L+R)/2;
    mergeSort(L,mid);
    mergeSort(mid+1,R);
    int posL=L,posR=mid+1,pos=0;
    while(posL<=mid||posR<=R){
        if(posR>R||(posL<=mid&&a[posL]<=a[posR])) b[pos++]=a[posL++];
        else b[pos++]=a[posR++];
    }
    for(int i=L;i<=R;i++) a[i]=b[i-L];
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    mergeSort(0,n-1);
    for(int i=0;i<n;i++) cout<<a[i]<<' ';
    return 0;
}