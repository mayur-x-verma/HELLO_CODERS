//Print pascal triangle 
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
    int n,i,j;
    cin>>n;
  
    for(i = 0;i<n;i++){
        for( j = 0;j<=i;j++)
        {
            int up = factorial(i);
            int low = factorial(j)*factorial(i-j);
            int icj = up/low;
            cout<<icj<<" ";
        }
        cout<<endl;
    }
    

 return 0;   
}