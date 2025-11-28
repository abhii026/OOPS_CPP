#include <iostream>
using namespace std;
class Height
{
public:
    int feet;
    int inch;
    float cm;
    Height(double v)
    {

        feet = v / (2.54 * 12);
        inch = (v / 2.54) - (feet * 12);
        cm = v - (feet * 12 + inch) * 2.54;
    }
    void print()
    {
        cout << feet << "\"" << inch << "'" << cm<<endl;
    }
    operator double()
    {
        return ((feet * 12) + inch) * 2.54 + cm;
    }
};
int main()
{
    double height_in_cm = 173.97;
    Height h = height_in_cm;
    h.print();
    double a = h;
    cout << "Height in cm's "<< a;
    return 0;
}
// 2.54cm=1inch
// 12inch=1feet