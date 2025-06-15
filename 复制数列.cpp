#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            vec.push_back(a[j]);
        }
    }
    vector<int> dp(n * n, 1);
    int ans = 1;
    for(int i = 0; i < n * n; i++) {
        for(int j = 0; j < i; j++) {
            if(vec[i] > vec[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
