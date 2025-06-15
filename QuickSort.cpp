#include <bits/stdc++.h>
using namespace std;
int a[200000];
void quickSort(long long l,long long r){
    if(l>=r) return;
    int pivot = a[l+rand()%(r-l+1)];
    int i=l-1,idx=l,j=r+1;
    while(idx<j){
        if(a[idx]<pivot) swap(a[idx++],a[++i]);
        else if(a[idx]>pivot) swap(a[idx],a[--j]);
        else idx++;
    }
    quickSort(l,i),quickSort(j,r);;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> a[i];
    quickSort(0,n-1);
    for(int i=0;i<n;i++) cout << a[i] << " ";
    return 0;
}