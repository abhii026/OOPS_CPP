#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    int b;
    try
    {
        cout << "Enter a number between 3 and 10" << endl;
        cin >> b;

        if (b < 3)
        {
            throw underflow_error("Number is less than 3!");
        }
        else if (b > 10)
        {
            throw overflow_error("Number is greater than 10!");
        }
    }
    catch (underflow_error &e)
    {
        cout << e.what() << endl;
        b = 3;
    }
    catch (overflow_error &e)
    {
        cout << e.what() << endl;
        b = 10;
    }

    cout << "You entered: " << b << endl;
    cout << "Program completed successfully." << endl;
    return 0;
}
