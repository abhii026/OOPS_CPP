#include <iostream>
using namespace std;
class Student
{
    // Private Data members
private:
    string name;
    int rollNumber;
    float marks;
    // Public Member functions
public:
    // Default Constructor
    Student()
    {
        name = "name";
        rollNumber = 0;
        marks = 0.0;
    }
    // Parameterized Constructor
    Student(string n, int r, float m)
    {
        name = n;
        rollNumber = r;
        marks = m;
    }
    // Function to display student details
    void display()
    {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", Marks: " << marks << endl;
    }
};
int main()
{
    // Creating objects of Student class
    Student s1;
    Student s2("Aman", 1, 95.5);
    // Displaying student details
    s1.display();
    s2.display();
    return 0;
}