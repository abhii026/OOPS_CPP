#include <iostream>
using namespace std;
class Test
{
public:
    int x, y;
    void setValues(int x, int y)
    {
        this->x = x; // this pointer is used to differentiate between member variable and parameter
        this->y = y; // this pointer points to the current object
    }
};
int main()
{
    Test obj, obj1;
    obj.setValues(10, 20);
    cout << "obj x: " << obj.x << ", y: " << obj.y << endl;
    obj1.setValues(30, 40);
    cout << "obj1 x: " << obj1.x << ", y: " << obj1.y << endl;
    return 0;
}