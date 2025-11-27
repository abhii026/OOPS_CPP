#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{

public:
    string name;
    double sal;
    Employee(string s, float sl)
    {
        name = s;
        sal = sl;
    }

    // Operator Overloading inside class.
    //  double operator+(Employee &obj)
    //  {
    //      // return this->sal + obj.sal;
    //      return sal + obj.sal;
    //  }
    // friend void operator-(Employee &obj1, Employee &obj2);
    void operator-(Employee &obj)
    {

        string n = this->name + obj.name;
        double salu = this->sal + obj.sal;
        Employee newObj(n, salu);
        return newObj;
    }
    // friend double operator+(Employee &obj1, Employee &obj2);
    double getsal() { return sal; }
    double operator+(double k)
    {
        return sal += k;
    }
};
// Operator Overloading outside class.
// double operator+(Employee &obj1, Employee &obj2)
// {
//     return obj1.sal + obj2.sal;
// }

// double operator+(double s, Employee &obj)
// {
//     obj.sal += s;
// }
int main()
{
    Employee c1("Abhi", 10000.00);
    Employee c2("Sam", 12000.100);
    // cout << fixed << setprecision(2) << endl;
    // cout << c1 - c2 << endl;
    // cout << c1 + 2000 << endl;
    // c1 + 1000.9380;
    // cout << c1.sal << endl;
    // cout << c2 + 2000 << endl;
    // cout << c2.sal << endl;
    Employee c3 = c1 - c2;
    cout << c3.name << " " << c3.sal;
    return 0;
}