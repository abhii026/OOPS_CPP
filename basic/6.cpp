#include <iostream>
using namespace std;
class Test
{
public:
    string name;
    int age;
    // this setValues() is inline member function.
    //  An inline member function is a class function whose definition is written inside the class body. When the function is called, the compiler replaces the function call with the actual code of the function, which can improve performance for small functions.
    //  Inline functions are typically used for small, frequently called functions to reduce the overhead of function calls.
    //  Inline functions can also be defined outside the class body using the 'inline' keyword.
    //  Inline functions can have default arguments, which are values that are used if no argument is provided during the function call.
    //  Default arguments must be specified from right to left, meaning that once a default argument is provided for a parameter, all subsequent parameters must also have default values.
    void setValues(string n, int a = 20)
    {
        name = n;
        age = a;
    }
    void print();
};
// this print() is non-inline member function.

// A non-inline member function is a class function whose definition is written outside the class body, usually using the scope resolution operator ::

void Test::print()
{
    cout << name << " " << age << endl;
}
int main()
{
    Test obj, obj1;
    obj.setValues("Abhishek", 21);
    obj.print();
    obj1.setValues("Rahul");
    obj1.print();
    return 0;
}