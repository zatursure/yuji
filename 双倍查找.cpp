#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int f(int n, int m, int k){
    while (n <= m){
        int mid = (n + m) / 2;
        if (a[mid] == 2 * k) return 1;
        else if (a[mid] > 2 * k) return m = mid - 1;
        else if (a[mid] < 2 * k) return n = mid + 1;
    }
}
int main(){
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) sum += f(i, n, a[i]);
    cout<<sum;
    return 0;
}