#include <iostream>
using namespace std;
class Complex
{
public:
    int real;
    int imag;
    Complex(int r, int i) : real(r), imag(i) {}
    int operator+(Complex &obj)
    {
        // return Complex(real + obj.real, imag + obj.imag);
        cout << real + obj.real << "+" << imag + obj.imag << "i"<<endl;
    }
    int operator-(Complex &obj)
    {
        // return Complex(real + obj.real, imag + obj.imag);
        cout << real - obj.real << " - (" << imag - obj.imag << "i)";
    }
    void display(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }
};
int main()
{
    Complex obj1(10, 20);
    Complex obj2(20, 40);
    Complex obj3(20, 40);
    obj1.display();
    obj2.display();
    obj3.display();
    // obj1 + obj2;
    // obj1 - obj2;
    display(obj1+obj2-obj3);
    return 0;
}