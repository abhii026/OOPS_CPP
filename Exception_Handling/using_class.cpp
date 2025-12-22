#include <iostream>
using namespace std;
class my_exception
{
    string err;

public:
    my_exception(string e) : err(e)
    {
    }
    string what()
    {
        return err;
    }
};
int main()
{
    try
    {
        int n;
        cout << "Enter value: ";
        cin >> n;
        if (n == 0)
        {
            my_exception exp_obj("Value is zero.");
            throw exp_obj;
        }
        else if (n < 0)
        {
            my_exception exp_obj("Negative value.");
            throw exp_obj;
        }
        cout << "Value is " << n << endl;
    }
    catch (my_exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}