#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    long long ans = 0;
    for (int left = 0; left < n - 2; ++left) {
        for (int mid = left + 1; mid < n - 1; mid++) {
            for (int right = mid + 1; right < n; right++) {
                long long L = min(a[left], a[mid]) * (mid - left);
                long long R = min(a[mid], a[right]) * (right - mid);
                ans = max(ans, L + R);
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}