
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll maxcons1s(string s, ll n)
{
  ll c = 0;
  ll res = 0;
  for (ll i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      c = 0;
    }
    else
    {
      c++;
      res = max(res, c);
    }
  }
  return res;
}
int main()
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll alskjf = 0; ll x = 0;
    ll y = 0;
    ll blskjf = 0;
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (s[0] == '0')
    {
      cout << maxcons1s(s, n) << endl;
    }
    else if (s[0] == '1' && s[n-1]=='0')
    {
      for (ll i = 1; i < n; i++)
      {
        x++;
        if (s[i] == '0')
        {
          alskjf = x;
          break;
        }
      }
      cout<<alskjf + maxcons1s(s,n)<<endl;
    }
    else if(s[n-1]=='1' && s[0]=='1')
    {
       for (ll i = 1; i < n; i++)
      {
        x++;
        if (s[i] == '0')
        {
          alskjf = x;
          // cout<<alskjf<<endl;
          break;
        }
         for (ll i = n-2; i >= 0; i--)
      {
        y++;
        if (s[i] == '0')
        {
          blskjf = y;
          // cout<<blskjf<<endl;
          break;
        }
      }
      }
      if((alskjf+blskjf)>maxcons1s(s,n))
      {
        cout<<alskjf+blskjf<<endl;
      }

    }
  }
  return 0;
}
