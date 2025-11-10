#include <iostream>
using namespace std;

// function overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists (different types or number of parameters). The compiler determines which function to call based on the arguments passed during the function call.
class Test
{
public:
    string name;
    int age;
    void setValues(string n, int a = 20)
    {
        name = n;
        age = a;
    }
    void setValues(int a, string n)
    {
        name = n;
        age = a;
    }
    void print();
};
void Test::print()
{
    cout << name << " " << age << endl;
}
int main()
{
    Test student1;
    student1.setValues("Abhishek", 19);
    student1.print();

    Test student2;
    student2.setValues(20, "Ankit");
    student2.print();

    return 0;
}