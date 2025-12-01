#include <iostream>
using namespace std;
class Animal
{
public:
    int height;
    Animal(int h) : height(h) {}
    void eat()
    {
        cout << "Animal is eating" << endl;
    }
};
class Dog : public Animal
{
    // height,eat();
public:
    string name;

    Dog(int h, string n) : Animal(h), name(n) {}
};
int main()
{

    Dog dog(2, "coco");
    Dog *dog_ptr = &dog;
    Animal *Ani_ptr = &dog;
    cout << dog_ptr->name << " " << dog_ptr->height << endl;
    Ani_ptr->eat();
    cout << " " << Ani_ptr->height;
    return 0;
}