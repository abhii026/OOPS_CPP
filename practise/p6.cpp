#include <iostream>
using namespace std;
class Complex
{
    float real;
    float img;

public:
    void setValue(float r, float i)
    {
        this->real = r;
        this->img = i;
    }
    void add(Complex c)
    {
        float newReal = this->real + c.real;
        float newImg = this->img + c.img;
        cout << "Sum: " << newReal << " + " << newImg << "i" << endl;
    }
    friend void add1(Complex c1, int x);
};
void add1(Complex c1, int x)
{
    float newReal = c1.real + x;
    float newImg = c1.img;
    cout << "Friend Sum: " << newReal << " + " << newImg << "i" << endl;
}
int main()
{
    Complex c1, c2;
    c1.setValue(3.0, 4.0);
    c2.setValue(1.0, 2.0);
    c1.add(c2);
    add1(c1, 5);
    return 0;
}