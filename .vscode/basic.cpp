
Pseudo:
// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
#define ll long long
class Solution{
  public:
  
  vector<ll>v1,ans;
vector<int>vis;

ll dfs(int x, vector<int>v[], vector<int>&val)
{
     vis[x]=1;
     
     vector<ll>tmp;
     for(int i=0;i<=v[x].size();++i)
     {
         int child=v[x][i];
         if(vis[child]==0)
         {
             v1[x]+=dfs(child,v,val);
             tmp.push_back(v1[child]);
         }
     }
     
     sort(tmp.begin(), tmp.end());
     if(tmp.size()==0) ans[x]=0;
     else ans[x]=abs(tmp[0]-tmp.back());
     
     v1[x]+=val[x];
     return v1[x];
}
  
  vector<long long> differenceTree(int n,vector<int> &p,vector<int> &vals)
  {
    //code here
     vector<int>v[n+2];
  for(int i=1;i<p.size();++i)
  {     v[i].push_back(p[i]-1);
      v[p[i]-1].push_back(i);
  }
  
  ans.clear(); ans.resize(n+2,0);
  vis.clear(); vis.resize(n+2,0);
  v1.clear(); v1.resize(n+2,0);
  dfs(0,v,vals);

  while(ans.size()>n) ans.pop_back();
  return ans;
  }
};


// { Driver Code Starts.


int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    vector<int> p(n),vals(n);
    for(int i = 0; i<n; i++)cin >> p[i];
    for(int i = 0; i<n; i++)cin >> vals[i];
    Solution obj;
    vector<long long> ans = obj.differenceTree(n,p,vals);
    for(long long i:ans)cout << i << " ";
    cout << "\n";
    
  }
  return 0;
}
