#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    // Default Constructor- initializes with sample values
    Employee()
    {
        name = "Vikash";
        id = 1;
        salary = 6000000.50;
        cout << "Constructor called using Default Constructor" << endl;
    }
    // Default Constructor
    Employee(int i, string n = "Unknown", float s = 0.0) : id(i), name(n), salary(s)
    {
        cout << "Constructor with default arguments called using Initializer List" << endl;
    }
    Employee(string n, int i, float s) : name(n), id(i), salary(s)
    {
        cout << " Parameterized Constructor called using Initializer List" << endl;
    }
    // Copy Constructor
    Employee(const Employee &e)
    {
        cout << "Copy Constructor called!" << endl;
        name = e.name;
        id = e.id;
        salary = e.salary;
    }
    // Function to display employee details
    // void display()
    // {
    //     cout << "Name: " << name << endl;
    //     cout << "ID: " << id << endl;
    //     cout << "Salary: " << salary << endl;
    // }
    ~Employee()
    {
        // Destructor
        cout << "Destructor called for " << id << endl;
    }
};
int main()
{
    // Using Default Constructor
    Employee obj1, obj2(2), obj3("John Doe", 3, 75000.00);
    Employee emp1;
    emp1 = obj3;

    // obj1.display();
    // obj2.display();
    // obj3.display();
    // emp1.display();

    cout << endl;
    return 0;
}