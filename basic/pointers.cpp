#include <iostream>
using namespace std;
// Call by address using pointers
void add2(int *a, int *b)
{
    *a += *b;
    cout << "The sum is: " << *a << endl;
}
// Call by Reference using references
void add1(int &a, int &b)
{
    a += b;
    cout << "The sum is: " << a << endl;
}
// Call by Value
void add(int a, int b)
{
    a += b;
    cout << "The sum is: " << a << endl;
}
struct  P{
    double radius;
};
{
    /* data */
};

int main()
{
    struct s1;
    
    
    int x = 5;
    int y = 10;
    
    cout << "Call by value" << endl;
    add(x, y);
    cout << x << " " << y << endl; // x and y remain unchanged ....call by value
    cout << "Call by reference" << endl;
    add1(x, y);
    cout << x << " " << y << endl; // x is changed, y remains unchanged..... call by reference using pointers
    add2(&x, &y);
    cout << x << " " << y << endl; // x is changed, y remains   unchanged..... call by reference using references

    return 0;
}