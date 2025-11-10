// Pointer to a data member
#include <iostream>
using namespace std;
class sample
{
public:
    int x;
};
int main()
{
    sample obj;
    obj.x = 10;
    int *ptr;
    ptr = &obj.x; // pointer to data member x of object obj
    cout << "Value of x using pointer: " << *ptr << endl;
    *ptr = 20; // modifying value of x using pointer
    cout << "Modified value of x using pointer: " << obj.x << endl;

    return 0;
}