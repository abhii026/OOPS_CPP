#include <iostream>
using namespace std;
int main()
{
    try
    {
        {
            {
                throw domain_error("!! Out of domain!!");
                cout << "AA";
            }
            cout << "BB" << endl;
        }
        cout << "CC" << endl;
    }
    // cout << "DD" << endl;
    catch (const domain_error &e)
    {
        cout << "Caught an exception: " << e.what() << endl;
    }
    cout << "Program completed successfully." << endl;
    return 0;
}