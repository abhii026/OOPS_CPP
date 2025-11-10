#include <iostream>
using namespace std;
class Test
{
public:
    int *ptr;
    int **ptr1;
};
int main()
{
    Test obj;
    int n = 10;
    obj.ptr = &n;
    obj.ptr1 = &obj.ptr;
    cout << obj.ptr << " " << *obj.ptr << endl;
     // prints address of n and value of n
    cout << obj.ptr1 << " " << *obj.ptr1 << " " << **obj.ptr1 << endl;
     // prints address of ptr, address of n and value of n
    return 0;
}