#include <iostream>
#include <iomanip>
using namespace std;
class Circle
{
    double r;

public:
    static int circleCount;
    static double getCircleCount()
    {
        return circleCount;
    }
    void setRadius()
    {
        cin >> r;
        circleCount++;
    }
    double calculateArea()
    {
        return 3.14159 * r * r;
    }
    double calculateCircumference()
    {
        return 2 * 3.14159 * r;
    }
    void displayDetails()
    {
        cout << fixed << setprecision(2);
        cout << "Radius: " << r << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Circumference: " << calculateCircumference() << endl;
    }
};
int Circle::circleCount = 0;
int main()
{
    int n;
    cin >> n;
    Circle c[n];
    for (int i = 0; i < n; i++)
    {
        c[i].setRadius();
        // cout << Circle::getCircleCount() << endl;
    }
    for (int i = 0; i < n; i++)
    {
        c[i].displayDetails();
    }

    return 0;
}