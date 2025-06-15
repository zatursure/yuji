#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
  int n, m;
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> a[i][j];
    }
  }
  int r = 0, c = 0, ans = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == m)
      {
        if (a[i][j] != 0)
        {
          c++;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == m)
      {
        if (a[i][j] != 0)
        {
          r++;
        }
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (a[i][j] != 0)
      {
        ans++;
      }
    }
  }
  cout << m << " " << c << " " << r << endl << ans;
  return 0;
}