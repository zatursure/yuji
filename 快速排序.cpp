#define CCF
#define SB
#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
int a[MAXN], rd;
int partition(int L,int R){
    int p=L;
    int x=L+1;
    for(int i=L+1;i<=R;i++){
        if(a[i]<a[p]||(a[i]==a[p]&&++rd%2)){
            swap(a[i],a[x++]);
        }
    }
    swap(a[p],a[--x]);
    return x;
}
void quick_sort(int L,int R){
    if(L>=R) return;
    int p=partition(L,R);
    quick_sort(L,p-1);
    quick_sort(p+1,R);
}
int main() {
    CCF SB
    return 0;
}