#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    int operator++()
    {
        ++x;
        return x;
    }
    int operator++(int)
    {
        x += 10;
        return x;
    }
};
int main()
{
    Test obj; obj.x = 23;
    cout << ++obj << endl;
    cout << obj++ << endl;
    return 0;
}