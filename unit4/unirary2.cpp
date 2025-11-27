#include <iostream>
using namespace std;
class Complex
{
public:
    int r, i;
    Complex(int a, int b) : r(a), i(b) {}
    Complex &operator++()
    {
        r += 7;
        i += 7;
        return *this;
    }
    void operator++(int)
    {
        r += 5, i += 5;
    }
    void operator--(int)
    {
        r += 2, i -= 4;
    }
    Complex operator+(Complex &c)
    {
        Complex tem(r + c.r, i + c.i);
        return tem;
    }
    void display()
    {
        cout << r << " + " << i << "i" << endl;
    }
};
int main()
{
    Complex c(12, 43);
    int a = 12;
    cout << (++(++a)) << endl;
    c.display();
    c++;
    c.display();
    ++ ++c;
    c.display();
    c--;
    c.display();
    (c1+c2+c).display();
    return 0;
}