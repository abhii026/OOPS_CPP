#include <iostream>
using namespace std;
int main()
{

    int a = 10;
    int *p = &a;  // p stores address of a
    int **q = &p; // q stores address of p
    cout << "Address of a: " << p << endl;
    cout << "Value of a(*p): " << *p << endl;
    cout << "Value inside (*p) **q : " << *q << endl;
    cout << "Address of p: " << q << endl;
    *p=20;
    cout << "Value of a(*p): " << *p << endl;
    cout << "Value of a: " << a << endl;

    return 0;
}