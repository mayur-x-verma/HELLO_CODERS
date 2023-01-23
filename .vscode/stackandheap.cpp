// count distinct elements in an array
#include <bits/stdc++.h>
using namespace std;
// by using hashsets
// void countDistinct(int arr[], int n)
// {
//     unordered_set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     cout<<s.size()<<endl;
// }
int countDistinctElement(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            count++;
    }

    return count;
}
int main()
{
    // naive approach

    int arr[] = {1,2,3,4,3,4,3,6,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << countDistinctElement(arr, n);

    return 0;
}