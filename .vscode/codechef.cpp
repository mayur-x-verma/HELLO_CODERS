#include <bits/stdc++.h>
using namespace std;
int solution(int arr[], int n)
{
    int start = 0;
    int end = n-1;
    int mid;
    int a;
    while(arr[start]<arr[end])
    {
        mid = (start+end)/2;
        if(arr[mid]<0)
        {

            start = mid;
            start++;
            a = arr[mid + 1];
        }
        else
        {
            end = mid;
            end--;
        }
    }
    return a;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);

	    solution(arr,n);
	}
	return 0;
}
