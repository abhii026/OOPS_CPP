#include <iostream>
using namespace std;
class Test
{
public:
    int x;
};
int main()
{
    Test obj, *ptr;
    obj.x = 10;
    cout << "Dot Operator" << endl;
    cout << obj.x << endl;
    ptr = &obj;
    cout << "Arrow Operator" << endl;
    cout << ptr->x << endl;
    ptr->x = 15;
    cout << "After Modification" << endl;
    cout << obj.x << endl;
    cout << "Using Dereference Operator" << endl;
    cout << (*ptr).x << endl;
    (*ptr).x = 20;
    cout << "After Modification" << endl;
    cout << obj.x << endl;
    return 0;

    // Output:
    // Dot Operator
    // 10
    // Arrow Operator
    // 10

    //Dot Operator is used to access members of an object directly.
    //Pointer Operator (->) is used to access members of an object through a pointer.
    //Arrow Operator is used to access members of an object through a pointer.
    //Dereference Operator (*) is used to access the object that the pointer points to.
    /*this pointer is an implicit parameter to all non-static member functions. It points to the object for which the member function is called.
    In the context of a member function, "this" refers to the object that is invoking the function*/
}