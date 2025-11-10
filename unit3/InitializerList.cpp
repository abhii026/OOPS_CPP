#include <iostream>
using namespace std;
class InitializerList
{
public:
    int a;
    int b;
    int *ptr;
    // Constructor using initializer list
    InitializerList(int x, int y) : a(x), b(y)
    {
        ptr = &this->a;
        cout << "Constructor called using Initializer List" << endl;
    }
    void display()
    {
        cout << a << " " << b << endl;
        cout << &a << " " << ptr << endl;
    }
};
int main()
{
    InitializerList obj(10, 20);
    obj.display();
    return 0;
}

// Output:
// Constructor called using Initializer List
// 10 20
// 0x7ffee3b8c9ac 0x7ffee3b8c9ac
// (The actual memory addresses will vary each time the program is run)

// Initializer List:
// An initializer list in C++ is a way to initialize member variables of a class before the constructor body executes.
// It is specified using a colon (:) followed by a comma-separated list of member initializations.
// This approach is often more efficient and can be necessary for initializing const members or reference members.
// Syntax:
// ClassName(Type1 arg1, Type2 arg2) : member1(arg1), member2(arg2)
// {
//     // constructor body
// }
