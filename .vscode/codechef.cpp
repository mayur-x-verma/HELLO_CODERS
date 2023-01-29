#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll binaryToDecimal(string str)
{
    ll dec_num = 0;
      ll power = 0 ;
    ll n = str.length() ;
   
      for(ll i = n-1 ; i>=0 ; i--){
      if(str[i] == '1'){
        dec_num += (1<<power) ;
      }
      power++ ;
    }
   
    return dec_num;
}
int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll c = 0;
	ll n;
	cin>>n;
	string s;
	cin>>s;
	if(binaryToDecimal(s)>=8){
	for(ll i = 0;i<n;i++)
	{
	    if(s[i]=='1')
	    {
	        c++;
	    }
	}
	if(c>3)
	{
	    cout<<"NO"<<endl;
	}
	else
	
	{
	    cout<<"YES"<<endl;
	}}
	else 
	{
	    cout<<"NO"<<endl;
	}
	}
	
	return 0;
}
