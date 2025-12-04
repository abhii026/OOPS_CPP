#include <iostream>
using namespace std;
class P
{
public:
    void display()
    {
        cout << "Class P's display." << endl;
    }
};
class A : virtual public P
{
public:
    void print()
    {
        cout << "A's Print!" << endl;
    }
};
class B : public virtual P
{
public:
    void print()
    {
        cout << "B's Print!" << endl;
    }
};
class C : public A, public B
{
public:
};
int main()
{
    C objc;
    objc.display();

    return 0;
}


