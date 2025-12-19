#include <iostream>
using namespace std;
int main()
{
    try
    {
        throw -1;
    }
    catch (int x)
    {
        cout << "Caught exception: " << x << endl;
    }

    return 0;
}