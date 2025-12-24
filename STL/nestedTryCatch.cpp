#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        int age;
        cout << "Enter age: ";
        cin >> age;
        try
        {
            if (age < 0)
            {
                throw domain_error("Wrong Input.");
            }
            else if (age < 18)
            {
                throw underflow_error("Under Age");
            }
        }
        catch (domain_error &err)
        {
            cout << err.what() << endl;
            age = -age;
        }
        cout << age << " Eligible." << endl;
    }
    catch (underflow_error &err)
    {
        cout << err.what() << endl;
    }
    return 0;
}