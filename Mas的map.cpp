#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,cnt=0;
    string s;
    cin >> n;
    vector<string>strings(n);
    for (int i = 0; i < n; i++) {
        cin >> strings[i];
    }
    cin >> s;
    int m = s.size();
    for (int i = 1; i <= m; i++) {
        string prefix = s.substr(0, i);
        for (const string& str : strings) {
            if (str.substr(0, i) == prefix) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
