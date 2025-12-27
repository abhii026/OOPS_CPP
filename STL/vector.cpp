#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec(6);
    cout << vec.size() << endl;  // prints 6
    cout << sizeof(vec) << endl; // prints 12

    cout << "Enter 6 elements: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];

    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
    return 0;
}