// write a program to change the upper case alphabet to lower case and vise versa
#include <iostream>
#include <algorithm> // sorting function inside it
#include <string>    //STL functions provided by c++
using namespace std;
int main()
{
    string s = "mayur the great"; // string class present in std
    cout << s << endl;            // store string in a contigous location
    // some useful functions
    cout << s.size() << endl;
    cout << s.find("m") << endl; // find function gives the index of its first occurrance
    cout << s.substr(1, 6) << endl;
    s = s + "mnop0";
    cout << s << endl;
    int res = s.find("the");  // find function returns always the first occurance
    if (res == string ::npos) // string :: npos is a special constant return by string when no such string is found
    {
        cout << "not present " << endl;
    }
    else
    {
        cout << "present at index " << s.find("the") << endl;
    }
    // comparison operator on string
    string s1 = "absc";
    string s2 = "mnose";
    if (s1 == s2)
        cout << "equal" << endl;
    else if (s1 > s2)
        cout << "s1 is greater" << endl;
    else
        cout << "s2 is greater" << endl;
    // lets do some input/output shit
    string str;
    cout << "enter your name" << endl;
    getline(cin, str); // read the whole line
    cout << str << endl;
    // way of traversing a string
    string str2;
    getline(cin, str2);
    for (int i = 0; i < str2.length(); i++)
    {
        cout << str2[i];
    }
    cout << endl;
    for (auto x : str2)
    {
        cout << x;
    }
    cout << endl;
    for (auto it = str2.begin(); it != str2.end(); it++)
    {
        cout << *it;
    }
    return 0;
}
