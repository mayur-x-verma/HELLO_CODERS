#include <bits/stdc++.h> // not a good practice in interveiw
using namespace std;     // use to create a saperate space for a variable as std
namespace may            // instead of writing std :: every time we have defined using namespace std;

{
    int x = 30;
    // we can also define any function inside namespace
    int fun()
    {
        return x * 10;
    }

}
int main()
{
    float x = 50.45;
    cout << x << endl;      // this will throw an error
    cout << may::x << endl; // prints 30
    cout << may::fun() << endl;
    // STL array.
    array<int, 100> arr; // if you define globally default it will take the values as 0
    // if we define inside the int main() function it will automatically become as garbage values.
    // another way to define the container array.
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    array<int, 5> arr;
    arr.fill(20); // -> {20,20,20,20,20}
    arr.at(4);    // -> give the element at the index 4

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr.at(i) << endl; // arr.at(i) print all the element of the array
    }

    // itrators(begin(),end(),rbegin(),rend()) -> these itrator basically use in every datastructure
    // in order to itrate an array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        cout << *it << " ";
    }
    for (auto it = arr.rbegin(); it >= arr.rend(); it++)// reverse itrator
    { // print the following in reverse{it >arr.rend} also a valid thing
        cout << *it << " ";
    }
    for (auto it = arr.end() - 1; it >= arr.begin(); it--)
    { // print the following in reverse
        cout << *it << " ";
    }
    // for each loop
    for (auto it : arr)
    {
        cout << it << " ";
    }
    string s = "laksdf"; // l a k s d f
    for (auto c : s)// iterating each charecter(or any datatype) automatically using the word auto
    {
        cout << c << " ";
    }
    // some important keyword
    // size
    cout<<arr.size();
    // front
    cout<< arr.front();// arr.at(0);
    // back
    cout<< arr.back();// arr.at(arr.size()-1)
    


    return 0;
} // itrator(*it) gives you the address of every elements

// struct mayur{
// string str;
// int num;
// char x;
// double dub;

// };