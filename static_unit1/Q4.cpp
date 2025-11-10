#include <iostream>
#include <iomanip>
using namespace std;
int findMin(int i1, int i2, int i3)
{
    if (i1 < i2 && i1 < i3)
    {
        return i1;
    }
    else if (i2 < i1 && i2 < i3)
    {
        return i2;
    }
    else
    {
        
        return i3;
    }
}
double findMin(double d1, double d2, double d3)
{
    if (d1 < d2 && d1 < d3)
    {
        return d1;
    }
    else if (d2 < d1 && d2 <d3)
    {
        return d2;
    }
    else
    {
        return d3;
    }
}
int main()
{
    int i1, i2, i3;
    double d1, d2, d3;
    cin >> i1 >> i2 >> i3;
    cin >> d1 >> d2 >> d3;
    cout << "Minimum integer: " << findMin(i1, i2, i3) << endl;
    cout << "Maximum double-point value: " << fixed << setprecision(2) << findMin(d1, d2, d3) << endl;
    return 0;
}