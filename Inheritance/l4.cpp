#include <iostream>
using namespace std;
class Researcher
{
protected:
    string paper_working_on(100);

public:
    string Domain;
    string paper_published(100);
};
class Person
{
protected:
    string dob;

public:
    string name;
    int age;
};
class Student : public Person
{
    private:
        int marks;
    protected:
        
};
class Teacher : public Person,
{
};
class Intern : private Student
{
private:
    // dob,name,age
    // roll.no,printstd(),from stodent
protected:
    string dob;
    float stip;

public:
    int empId;
};
int main()
{

    return 0;
}