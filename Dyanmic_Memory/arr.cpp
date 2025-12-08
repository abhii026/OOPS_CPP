#include <iostream>
using namespace std;

class Test
{
public:
    int x;

    Test() {}

    Test(int a) : x(a) {}
};

int main()
{
    int *arr = new int[3];

    for (int i = 0; i < 3; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    Test *t = new Test[3];

    delete[] arr;
    delete[] t;

    return 0;
}
