#include <iostream>
using namespace std;
class practice
{
public:    // access specifier
    int x; // class members
    string s;
    float t;
    void function(); // define method of a class
};
void practice::function()
{
    cout << "function bolte public " << endl;
}
int main()
{
    practice myobj;
    practice myobj1; // creating object of class practice
    myobj.x = 20;    // setting new value
    myobj.s = "mayur the great";
    myobj.t = 1.78;
    myobj1.s = "babu";
    cout << "The value of x is :" << myobj.x << "\n";
    cout << "the name is " << myobj.s << "\n";
    cout << "The height is " << myobj.t << "\n";
    cout << "lsflsjfls : " << myobj1.s << "\n";
    myobj1.function();
    return 0;
}