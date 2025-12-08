#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    Test(int a) : x(a) {}
};
int main()
{

    Test *ptr = new Test(20);
    cout<<ptr->x<<endl;
    // char *c = new char;
    // *c = 'a';
    // cout << c;
    return 0;
}