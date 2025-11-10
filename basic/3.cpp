#include <iostream>
using namespace std;
struct student
{
    /**
     * @brief Represents a structure for storing student information.
     *
     * The student structure can be used to store multiple related pieces of data
     * about a student, such as their name, age, and CGPA, each in its own member.
     * Structures allow grouping different data types together for better organization.
     *
     * Example usage:
     *   student s1;
     *   s1.name = "Abhishek";
     *   s1.age = 20;
     *   s1.cgpa = 8.5;
     */
    string name;
    int age;
    float cgpa;
};

union Salary
{
    /**
     * @brief Represents a union for student-related data.
     *
     * The studentUnion can be used to store different types of student information
     * in the same memory location, allowing efficient use of memory when only one
     * type of data is needed at a time.
     *
     * Example usage:
     *   studentUnion su1;
     */
    float amount;
    int workingDays;
};

enum Days
{
    /**
     * @brief Represents the days of the week.
     *
     * The Day enumeration can be used to represent the days of the week in a type-safe manner.
     * Using enum class prevents implicit conversions to int, enhancing code safety.
     *
     * Example usage:
     *   Day today = Day::Monday;
     */
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    // // Structure:
    // student s1;
    // // s1.name = "Abhishek"; // intilize like this or
    // cout << "Enter name: ";
    // getline(cin, s1.name);
    // cout << "Enter age: ";
    // cin >> s1.age;
    // cout << "Enter CGPA: ";
    // cin >> s1.cgpa;
    // cin.ignore(); // Clear the newline character left in the input buffer

    // cout << "\nStudent Details:\n";
    // cout << "Name: " << s1.name << endl;
    // cout << "Age: " << s1.age << endl;
    // cout << "CGPA: " << s1.cgpa << endl;
    // cout << "Size of student structure: " << sizeof(s1) << " bytes" << endl;

    // // Union:
    // Salary su1; // Declare a union variable
    // su1.amount = 5000.50;
    // su1.workingDays = 22; // This will overwrite the previous value of amount
    // cout << "Salary Amount: $" << su1.amount << endl;
    // cout << "Working Days: " << su1.workingDays << endl;
    // cout << "Size of union: " << sizeof(su1) << " bytes" << endl;

    // enum
    Days today = Wednesday;
    cout << Wednesday << endl;
    // cout << "Enter day (0 for Monday, 1 for Tuesday, ..., 6 for Sunday): ";
    // int dayInput;
    // cin >> dayInput;
    // if (dayInput < 0 || dayInput > 6)
    // {
    //     cout << "Invalid input! Please enter a number between 0 and 6." << endl;
    //     return 1; // Exit the program with an error code
    // }
    // today = static_cast<Days>(dayInput);
    switch (today)
    {
    case Monday:
        cout << "Today is Monday." << endl;
        break;
    case Tuesday:
        cout << "Today is Tuesday." << endl;
        break;
    default:
        cout << "It's some other day." << endl;
        break;
    }
    return 0;
}