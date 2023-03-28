#include <bits/stdc++.h>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
		int n, i, j;
		cin >> n;
		string s;
		cin >> s;
		i = 0;
		j = n - 1;
		int c = 0;
		while (i <= j)
		{
			if (s[i] == '(' && s[j] == ')')
			{
				i++;
				j--;
			}
			else if ((s[i] == '(' && s[j] == '('))
			{
				c++;
				j--;
			}
			else if (s[i] == ')' && s[j] == ')')
			{
				c++;
				i++;
			}
      else if(s[i]==')' && s[j]=='(')
      {
        c += 2;
        i++;
        j--;
      }
		}
		cout << c << endl;
	}
	return 0;
}
