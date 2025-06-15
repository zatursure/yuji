#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n >> x;
    int arr[10001];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int L = 0, R = n - 1;
    int cnt = 0;
    while(L <= R) {
        cnt++;
        int mid = (L + R) / 2;
        if(arr[mid] == x) {
            cout << cnt << endl;
            return 0;
        }
        else if(arr[mid] < x) L = mid + 1;
        else R = mid - 1;
    }
    return 0;
}
