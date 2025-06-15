#include <bits/stdc++.h>
using namespace std;
// 模板
int f(vector<int>& arr, int num) {
    int L = 0;
    int R = arr.size() - 1;
    int ans = -1;
    while (L <= R) {
        int mid = L + (R - L) / 2;
        if (arr[mid] == num) {
            ans = mid;
            L = mid + 1;
        }
        else if (arr[mid] < num) L = mid + 1;
        else R = mid - 1;
    }
    return ans;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        cout << f(arr, num) << endl;
    }
    return 0;
}
