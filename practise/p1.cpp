#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float salary;
};
int main()
{

    Employee arr[5];
    Employee *ptr;
    ptr = arr; // Pointing to the first element of the array
    float highestSalary = 0;
    for (int i = 1; i <= 2; i++)
    {
        cout << "Enter id, name, salary of Employee " << i << ": " << endl;
        cin >> ptr->id >> ptr->name >> ptr->salary;
        ptr++; // Move to the next Employee object
    }
    ptr = arr;
    for (int i = 1; i <= 2; i++)
    {
        cout << "Employee " << i << " id, name, salary: " << ptr->id << " " << ptr->name << " " << ptr->salary << endl;
        // highestSalary = max(highestSalary, ptr->salary);
        highestSalary = highestSalary > ptr->salary ? highestSalary : ptr->salary;
        ptr++;
    }
    cout << "Highest Salary: " << highestSalary << endl;
    
    return 0;
    print();
}