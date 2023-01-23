// pointers are the variables that stores the address of another variable.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // basic syntax
    int a = 10; // variable
    int *ptr;
    ptr = &a;             // assigning the address of a(as &a) in *ptr pointer variable.
    cout << &a << endl;   // gives the address of the variable.
    cout << *ptr << endl; // gives the value associated with that address
    cout << ptr << endl;  // since ptr = &a as it will give the address too.

    // we can also modify the value using pointer for example
    cout << *ptr << endl; // initial value
    *ptr = 39;
    cout << a << endl; // value after updation

    return 0;
}
// pointer arithematic includes ++,--,+,-
int main()
{
    int a = 10;
    int *ptr; // or int * ptr = &a
    ptr = &a;
    ++ptr; // increase the address by 4(depends on the size of datatype,like char, float etc.)
    cout << ptr << endl;
    // pointers with array
    int arr[] = {1, 3, 4, 5, 6, 7};
    int *ptr = arr;
    for (int i = 0; i < sizeof(arr); i++)
    {
        cout << *(arr + i);
        // ++arr is illegal
    }

    // pointer to pointer
    int a = 10;
    int *p;
    p = &a;
    cout << *p << endl; // gives the value associated with a
    int **q = &p;
    cout << **q; // 10
    cout << *q;  // address of p let 2000
    return 0;
}
// pointers in function
void func(int n)
{

}
int main()
{
    // call by reference and call by value
    

    retrun 0;
}