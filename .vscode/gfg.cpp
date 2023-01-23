// write a program to find the frequency of an array
// write a program to find the intersection of two array
// write a program to find the union of two array
// write a program to find the number of distinct element in an array
// write a program to find the pair with given sum in an unsorted array.
// write a function which return the list of smaller element for a given element in an array.

#include <bits/stdc++.h>
using namespace std;
void intersectionArr(int arr[], int brr[], int n, int m)
{
    int res = 0;
    // step 1 is to give the number of distinct element
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i-1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        for (int j = 0; j < m; j++)
        {
            if (arr[i] == arr[j])
            {
                res++;
                break;
            }
        }
    }
    cout << res << endl;
}

int main()
{
    int arr[] = {10,15,20,15,30,5};
    int brr[] = {30,5,30,80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m = sizeof(brr) / sizeof(brr[0]);
    intersectionArr(arr, brr, n, m);
    return 0;
}

// the strongly recommended practice is to use reference before string when we pass as a parameter
// when you pass the string it will not copied as a whole string just for efficienct purpose
// in a function as well as const because we don't want to change the value of string during any operation