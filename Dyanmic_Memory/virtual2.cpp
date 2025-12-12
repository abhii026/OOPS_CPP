#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A()
    {
        cout << "Base Dis" << endl;
    }
};
class B : public A
{
    int *x;

public:
    B(int a)
    {
        x = new int(a);
    }
    ~B()
    {
        delete x;
        cout << "Derived Dis" << endl;
    }
};
int main()
{
    A *ptr = new B(10);
    // B *ptr1 = new B(10);
    delete ptr;
    return 0;
}