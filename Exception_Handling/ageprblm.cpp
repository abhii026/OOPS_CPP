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
            throw "Age can not be Negative.";
        }
        else if(age<18){
            throw "Under age.";
        }
        cout<<"Eligible"<<endl;
    }
    catch (const char *e)
    {
        cout << "Caught an exception: " << e << endl;
    }
    cout<<"Done.";
    return 0;
}