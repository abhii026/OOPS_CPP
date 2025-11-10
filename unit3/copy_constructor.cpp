#include <iostream>
using namespace std;
class Sample
{
    // Constructor
    // A constructor is a special member function that is automatically called when an object of the class is created
    // It has the same name as the class and no return type
    // It can be used to initialize data members
    // when object is created just after the constructor is called
public:
    int x;
    int y;
    Sample()
    {
        cout << "Constructor called!" << endl;
    }
};
int main()
{
    Sample obj1;
    obj1.x = 10;
    obj1.y = 20;
    cout << "Object 1 - x: " << obj1.x << ", y: " << obj1.y << endl;

    // Sample obj2 = obj1;  // DCopy constructor is called
    Sample obj2(obj1); // Copy constructor is called
    cout << "Object 2 - x: " << obj2.x << ", y: " << obj2.y << endl;

    return 0;
}