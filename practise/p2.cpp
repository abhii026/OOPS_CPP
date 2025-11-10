#include <iostream>
using namespace std;
class Rectangle
{
public:
    // Data members
    int length;
    int width;

    // Member functions
    void setValues(int l, int w)
    {
        this->length = l;
        this->width = w;
    }

    int area()
    {
        // Calculate area
        return this->length * this->width;
    }
    int perimeter()
    {
        // Calculate perimeter
        return 2 * (this->length + this->width);
    }
};

int main()
{
    // Create object of Rectangle class
    Rectangle r;
    // Create pointer of Rectangle class
    Rectangle *ptr;
    // Pointing to the object r
    ptr = &r;
    int l, w;
    cout << "Enter length and width: " << endl;
    cin >> l >> w;
    // Using pointer to set values
    ptr->setValues(l, w);
    // Using pointer to get area and perimeter
    cout << "Area: " << ptr->area() << endl;
    cout << "Perimeter: " << ptr->perimeter() << endl;

    return 0;
}