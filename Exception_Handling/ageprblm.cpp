#include <iostream>
using namespace std;
int main()
{
    int age;
    try
    {
        cout << "Enter your age: ";
        cin >> age;
        if (age < 0)
        {
            // throw "Age can not be Negative.";
            throw -1;
        }
        else if (age < 18)
        {
            throw "Under age.";
        }
        cout << "Eligible" << endl;
    }
    catch (const char *e)
    {
        cout << "Caught an exception: " << e << endl;
    }
    catch (int x)
    {
        cout << "Age can not be Negative. " << endl;
    }
    cout << "Done.";
    return 0;
}