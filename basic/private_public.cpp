#include <iostream>
using namespace std;
class Test
{
private:
    int age;

public:
    string name;
    friend void access(Test &objA); // friend function declaration
    void getValues()
    {
        cout << name << " " << age << endl;
    }
    void print();
};
void access(Test &objA)
{ // friend function definition
    Test obj1;
    obj1.name = "Rahul";
    obj1.age = 21; // accessing private member
    obj1.getValues();
}
void Test::print()
{
    cout << name << " " << age << endl;
}
int main()
{
    Test objA;
    access(objA); // calling friend function
    objA.getValues();
    objA.print();
    return 0;
}