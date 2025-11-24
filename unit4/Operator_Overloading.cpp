#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    Test(int a) : x(a) {}
    int operator+(Test &obj) // for object + object
    {
        return x + obj.x;
    }
    int operator+(int k) // for obj+ int
    {
        return x + k;
    }
};
int main()
{
    int a = 10, b = 20;
    cout << a + b << endl;
    Test p(10), q(20);
    cout << p + 10 << endl;
    return 0;
}