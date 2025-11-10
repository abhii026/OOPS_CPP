#include <iostream>
using namespace std;
void fun(int *&ptr)
{
    int n = 10;
    ptr = &n;
    cout << ptr << endl; // prints 10
}
int main()
{
    int *ptr;
    fun(ptr);
    return 0;
}