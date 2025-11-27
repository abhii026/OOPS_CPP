#include <iostream>
using namespace std;
class A
{
public:
    int c;
};
class Test
{
public:
    int i;
    Test(double p)
    {
        i = (int)p;
    }
    Test(A &obj)
    {
        i = (obj.c) / 2;
    }
    operator int()
    {
        return i * 2;
    }
};

int main()
{
    A obja;
    obja.c = 30;
    // Test obj = 20.432;
    Test obj = obja;
    cout << obj.i;
    // cout << obja.c;
    // int a = 20.292;
    // cout << a << endl;
    // char x = 97;
    // cout << x << endl;
    // char c = 'z';
    // cout << (int)c;
    return 0;
}