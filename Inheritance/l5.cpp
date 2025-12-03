#include <iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout << "Hello" << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << "Hii" << endl;
    }
};
int main()
{
    B b;
    b.print();
    A *ptr = &b;
    ptr->print();
    return 0;
}



C:/Users/iabhi/OneDrive/Desktop/coding/OOPS_CPP