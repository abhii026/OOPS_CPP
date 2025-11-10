
#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    int y;
    int *ptr;
    Test(int x, int y)
    {

        this->x = x;
        this->y = y;
        ptr = &this->x;
    }
    // Copy Constructor user-defined
    Test(Test &t)
    {
        cout << "User defined Copy Constructor called!" << endl;
        this->x = t.x;
        this->y = t.y;
        // Deep Copy
        ptr = &x;
    }
    void display()
    {
        cout << x << " " << y << endl;
        cout << &x << " " << ptr << endl;
    }
};

int main()
{
    // printf("Hello World");
    // Test ob1j1(10, 20);
    // ob1j1.display();
    // // Test ob1j2 = ob1j1;
    // //Default copy constructor is called
    // Test ob1j2(ob1j1);

    // ob1j2.display();

    Test obj1(10, 20);
    obj1.display();
    Test obj2 = obj1; // Copy constructor is called
    obj2.display();

    return 0;
}