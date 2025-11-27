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
    int operator-(Test &obj)
    {
        return x - obj.x;
    }
};
int main()
{
    int a = 10, b = 20;
    cout << a + b << endl;
    Test p(20), q(20);
    cout << p + q << endl;
    cout << p - q << endl;
    return 0;
}