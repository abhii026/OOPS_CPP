#include <iostream>
using namespace std;
class Animal
{
private:
    string name;

protected:
    int age;

public:
    double height;
    void eat()
    {
        cout << "Animal is Eating!!" << endl;
    }
};
class Dog : public Animal
{

public:
    void bark()
    {
        cout << "Dog is Barking!!" << endl;
    }
};

int main()
{
    Dog d;
    d.height = 10;
    d.eat();
    d.bark();

    return 0;
}
