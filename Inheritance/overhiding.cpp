// This program demonstrates Runtime Polymorphism using Virtual Functions and Function Overriding in C++.
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void eat()
    {
        cout << "Animal is eating!!" << endl;
    }
};
class Dog : public Animal
{
public:
    void eat() override
    {
        cout << "Dog is eating!!" << endl;
    }
};

int main()
{
    Dog dog;
    dog.eat(); //Dog::eat()
    Animal *ptr = &dog;
    ptr->eat(); //Dog::eat()
    return 0;
}