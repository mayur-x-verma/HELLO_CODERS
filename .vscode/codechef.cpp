#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int mn = INT_MAX;
        vector<int> v;
        for(int i = 0;i<2*n;i++)
        {
            int x;
            cin>>x;
            v.emplace_back(x);
        }
        sort(v.begin(),v.end());
        
        for(auto it:v){
            cout<<it<<" ";

        }
        cout<<endl;
    }

    return 0;
}