#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
// int prefixSum(vector<int>,int n)
// {
//   int sum = 0;
//   for(int i = 1;i<=n;i++)
//   {
//     sum+=v[i];
//   }
//   return sum;
// }
int main()
{
  // your code goes here
  ll t;
  cin >> t;
  while (t--)
  {
    
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i = 1;i<=n;i++)
    {
        v.push_back(i);
    }
    if(n%2!=0)
    {
      cout<<"-1"<<endl;
    }
    // for(ll i = 2;i<=n;i++)
    // {
    //   if(v[i]%2!=0)
    //   {
    //     swap(v[i],v[i+1]);
    //   }
    // }
    for(auto it:v)
    {
      if(v[it]%2!=0)
      {
        swap(v[it],v[it+1]);
      }
      cout<<it<<" ";
    }
  }
  return 0;
}
