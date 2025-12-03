#include <iostream>
using namespace std;
class A
{
    int x;

protected:
    int y;

public:
    void show()
    {
        cout << x << " " << y << endl;
    }
};
class B : public A
{
public:
    void print()
    {
        cout << y;
    }
};
int main()
{
    B b;
    b.show();
    return 0;
}