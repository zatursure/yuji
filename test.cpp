#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<long long> csgo(n);
  for (int i = 0; i < n; ++i) cin >> csgo[i];
  int q;
  cin >> q;
  while (q--){
    int x, y;
    cin >> x >> y;
    int sum = 0;
    for (int i = x - 1; i <= y - 1; ++i){
      sum += csgo[i];
    }
    cout << sum << endl;
  }
  return 0;
}