// write a program to print fibonacci series using recursion
// write a program to print the sum of the digit of a  given number
// rope cutting problem using recursion tree
// print all the substring/subsets of a given string using recursion.tree
// Tower of Hanoi problem using recursion tree
#include <bits/stdc++.h>
using namespace std;
int findSumOfDigit(int n)
{
    if (n == 0)
        return 0;
    return findSumOfDigit(n/10) + n%10;
}
int main()
{
    int n;
    cin >> n;
    cout << findSumOfDigit(n);

    return 0;
}
// a recursion function is called tail recursion if their parent function has nothing more to return