#include <iostream>
#include <exception>
using namespace std;
int main()
{
    try
    {
        int n;
        cout << "Enter value: ";
        cin >> n;
        if (n == 0)
        {
            throw 0;
        }
        else if (n < 0)
        {
            throw true;
        }
    }
    catch (int i)
    {
        cout << "Value is zero." << endl;
    }
    catch (bool b)
    {
        cout << "Negative value." << endl;
    }
    cout << "Program Executed.";
    return 0;
}