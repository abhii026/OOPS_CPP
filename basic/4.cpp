#include <iostream>
using namespace std;
class Std
{
public:
    static int count;
    /**
     * @brief Represents a class for storing student information.
     *
     * The Std class encapsulates student details such as name, age, CGPA, and
     * placement option. It provides a method to print the student's information.
     * Classes allow bundling data and methods together, promoting encapsulation
     * and code reuse.
     * Example usage:
     *   Std s1;
     *   s1.name = "Abhishek";
     *   s1.age = 20;
     *   s1.cgpa = 8.5;
     *   s1.optPlace = true;
     *   s1.print();
     */
    string name;
    int age;
    float cgpa;
    bool optPlace;
    // void print();
    static void print(){
        cout<<"Static Print Function Called"<<endl; 
    }
};
int Std::count = 0;
// void Std::print()
// {
//     cout << "Name is " << name << ", Age: " << age << ", CGPA: "
//          << cgpa << ", Opted for Placement: " << (optPlace ? "Yes" : "No") << endl;
// }
int main()
{
    Std s1 = {"Abhishek", 20, 8.5, true};
    // s1.print();
    // cout << "Total Students: " << Std::count << endl;
    // Std::count++;
    // cout << "Total Students: " << Std::count << endl;
    // Std::count = 2;
    // cout << "Total Students: " << Std::count << endl;
    Std::print();
    // Std.print();

    return 0;
}