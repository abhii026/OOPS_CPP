#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int *arr;
    try
    {
        arr = new int[100000000000];
    }
    // catch (exception &errcode)
    // {
    //     cout << "Memory allocation failed: " << errcode.what() << endl;
    // }
    catch (bad_alloc &errcode)
    {
        cout << "Memory allocation failed: " << errcode.what() << endl;
    }
    cout << "Program Executed Successfully";
    return 0;
}