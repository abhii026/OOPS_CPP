#include <iostream>
using namespace std;
int main()
{
    cout << "---Program Started---" << endl;
    try
    {
        int a, b;
        cout << "Enter a,b: ";
        cin >> a >> b;
        try
        {
            if (b <= 0)
            {
                throw b;
            }
        }
        catch (int x)
        {
            if (x < 0)
            {
                b = -x;
            }
            else
            {
                throw;
            }
        }
        cout << a / b << endl;
    }
    catch (int i)
    {
        cout << "Division by zero." << endl;
    }
    cout << "---Progran Executed Successfully---";
    return 0;
}