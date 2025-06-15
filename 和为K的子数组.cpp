#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    
    unordered_map<int, int> p;
    p[0] = 1;
    int c = 0, cnt = 0;

    for (int num : A) {
        c += num;
        if (p.find(c - k) != p.end()) {
            cnt += p[c - k];
        }
        p[c]++;
    }

    cout << cnt;
    return 0;
}