#include <bits/stdc++.h>
using namespace std;
int a[200000];
int read()
{
  int x = 0, f = 1;
  char ch = getchar();
  while (ch < '0' || ch > '9')
  {
    if (ch == '-')
      f = -1;
    ch = getchar();
  }
  while (ch >= '0' && ch <= '9')
  {
    x = (x << 1) + (x << 3) + (ch ^ 48);
    ch = getchar();
  }
  return x * f;
}
int main(){
    int n=read();
    int k=read();
    for(int i=1;i<=n;i++) a[i]=read();
    nth_element(a+1,a+k,a+n+1);
    cout<<a[k];
    return 0;
}