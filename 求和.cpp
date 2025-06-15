#include <bits/stdc++.h>

using namespace std;

int a[100005], sum[100005];

int main()

{

  int n;

  cin >> n;

  for (int i = 1; i <= n; i++)

  {

    cin >> a[i];

    sum[i] = sum[i - 1] + a[i];
  }

  int t, l, r;

  cin >> t;

  for (int i = 1; i <= t; i++)

  {

    cin >> l >> r;

    cout << sum[r] - sum[l - 1] << endl;
  }

  return 0;
}