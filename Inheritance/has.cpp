#include <iostream>
using namespace std;
class Person
{
public:
    string name;
};
class Eng
{
public:
    int pow;
};
class Car
{
public:
    Eng eng;
    Person *driver;
    void setDriver(Person *ptr)
    {
        driver = ptr;
    }
};
int main()
{
    Car car;
    Person p1, p2;
    p1.name = "person1";
    p2.name = "person2";
    car.setDriver(&p1);
    cout << car.driver->name << endl;

    return 0;
}