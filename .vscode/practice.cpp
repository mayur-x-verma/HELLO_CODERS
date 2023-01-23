#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int k)
{
    int mid;
    int start = 0;
    int end = n - 1;
    while (arr[start] <= arr[end])
    {
        mid = (start + end) / 2;
        if (k == arr[mid])
            return mid;

        if (k < arr[mid])
        {
            end = mid;
            mid = (start + end) / 2;
        }
        else if (k > arr[mid])
        {
            start = mid;
            mid = (start + end) / 2;
        }
    }
}
int recursiveBs(int arr[], int n, int k,int mid,int start,int end)
{
    if (k == arr[mid])
        return mid;
    
    return if()
}
int twoPointers(int arr[], int n, int k)
{

}
int squareRoot(int n)
{

}
int searchInRotated(int arr[], int n, int k)
{

}
int count1s(bool arr[])
{

}
int findPeak(int arr[])
{
    
}
int main()
{
    
    int start = 0;
    int end = 6;
    int mid = (start+end)/2;
    int arr[7] = {10, 20, 33, 43, 56, 64, 110};
    cout << binarySearch(arr, 7, 10);
    return 0;
}