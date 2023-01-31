#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
// 8 6
// 4 5 6 1 2 3 8 7   1 2 3 4 5 6 8 7  1 2 3 4 5 6 7 8
// 2

void solution(string s)
{
  int n = s.length();
  for (int i = n-1; i >= 0; i--)
  {
    if(s[i]==' ')
      cout<<s[i];
  }
}
int main()
{
  string s;
  cin>>s;
  solution(s);
  return 0;
}
