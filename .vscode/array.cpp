#include <bits/stdc++.h>
// typedef long long int ll;
using namespace std;
int largestElement(int arr[])
{
    int lar = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > lar)
        {
            lar = arr[i];
        }
    }
    return lar;
}
int secLargest(int arr[])
{
    int seclar = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] != largestElement(arr))
        {
            if (arr[i] > seclar)
                seclar = arr[i];
        }
    }
    return seclar;
}
bool sorted(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        /* code */
        if (arr[i] < arr[i + 1])
        {
            continue;
        }
        else
            return false;
    }
    return true;
}
void revArray(int arr[], int n)
{
    int end = n - 1;
    int start = 0;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void remDup(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
    }
}
int stockBuySell(int arr[], int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
        {
            profit = profit + (arr[i] - arr[i - 1]);
        }
    }
    return profit;
}
void minConsFilps(string s)
{
}
int trapRainWater(int arr[], int n) // make two array of rmax and lmax
{
}
void majorityElements(int arr[], int n) // element exists more than the n/2 times
{
}
int slidingWindow(int arr[], int n, int k) // to find the sum of k consecutive elements
{                                          // if elements are non negative then can be helpful for finding subarray with given sum
    int sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum = sum + arr[i];
        
    }
}
void rotateArray(int arr[], int n, int d)
{
    // rotate by d
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        insert
        if((i+d)>n)
        {

        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int prefixSum(int arr[], int n)// to get things done in o(1)precompute the prefix array
{
}
bool twoPointer(int arr[], int n) // there exists elements whose pair is equal to x
{
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    rotateArray(arr, n);

    return 0;
}
