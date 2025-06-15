#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int i = 0;
  while(s[i] == '0')
  {
   	i++;
  }
  s.erase(0,i);
  int len=s.size();
  swap(s[0],s[len-1]);
  i=0;
  while(s[i] == '0')
  {
   	i++;
  }
  s.erase(0,i);
  cout<<s<<endl;
	return 0;
}