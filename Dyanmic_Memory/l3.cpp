#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void eat()
    {
        cout << "Animal is eating" << endl;
    }
};

class Cat : public Animal
{
public:
    void eat()
    {
        cout << "Cat is eating" << endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "Dog is eating" << endl;
    }
};

void call(Animal *ptr)
{
    ptr->eat();
}

int main()
{
    Animal *ptr_Ani;

    ptr_Ani = new Dog();
    ptr_Ani->eat(); // Dog::eat()

    ptr_Ani = new Cat();
    ptr_Ani->eat(); // Cat::eat()

    call(ptr_Ani); // Cat::eat()

    return 0;
}
