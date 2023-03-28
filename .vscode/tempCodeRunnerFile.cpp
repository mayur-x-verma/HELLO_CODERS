#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int nn;
		cin >> nn;
		string ss;
		cin >> ss;
	    
        vector<int> forBrac,backBrac;

        int cnt = 0;
        for(int i = 0;i<nn;i++){
            if(ss[i] == '('){
                cnt++;
                
            }
            forBrac.push_back(cnt);
        }

        cnt = 0;
        for(int i = (nn-1);i>=0;i--){
            if(ss[i] == ')'){
                cnt++;
               
            }
             backBrac.push_back(cnt);
        }

        reverse(backBrac.begin(),backBrac.end());



        int ans = 0;
        int minVal = INT_MAX;
        for(int i = 0;i<nn;i++){
             ans = max(ans, (min(forBrac[i],backBrac[i])*2));
        }
        cout<<nn-ans<<endl;
    
	}
	return 0;
}
