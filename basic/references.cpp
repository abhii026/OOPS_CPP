#include <iostream>
using namespace std;
int main()
{

    int a = 20;
    int c = a;
    int &b = a;
    cout << a << " " << c << endl;
    b = 40;
    c = 60;
    cout << a << " " << c << endl;
    return 0;
}