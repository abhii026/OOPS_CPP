#include <iostream>
using namespace std;
class Test
{
public:
    int x;
    int y;

    // Constructor is defined here
    // It has the same name as the class and no return type
    // It is automatically called when an object of the class is created
    // It can be used to initialize data members
    // when object is created just after the constructor is called

    // Default constructor
    //what is default constructor?
    // A default constructor is a constructor that can be called with no arguments
    // It initializes the object with default values
    //  Test()
    //  {
    //      cin>>x>>y;
    //      cout<<x<< " " <<y<<endl;
    //      cout << "Hello I am a constructor" << endl;
    //  }
    // Parameterized constructor
    // A parameterized constructor is a constructor that takes arguments
    // It initializes the object with the provided values
    Test(int a, int b=10)
    {
        x = a;
        y = b;
        cout << x << " " << y << endl;
    }
// Destructor
//  It has the same name as the class but is preceded by a tilde (~)
//  It is automatically called when an object of the class goes out of scope or is deleted
//  It can be used to release resources or perform      cleanup tasks
// when object is destroyed just before the destructor is called
// ~Test()
// {
//     cout << "Hello I am a destructor" << endl;
// }
};
int main()
{
    // Test t;
    Test t1(3);
    return 0;
}