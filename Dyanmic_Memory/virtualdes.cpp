#include <iostream>
using namespace std;
class A
{
public:
    virtual ~A()
    {
        cout << "dtor of class A" << endl;
    }
};
class B : public A
{
    int *p;

public:
    B()
    {
        p = new int[10];
    }
    ~B()
    {
        delete[] p;
        cout << "dtor of class B" << endl;
    }
};
int main()
{

    
    

    A *ptr_A = new B();
    delete ptr_A;
    return 0;
}