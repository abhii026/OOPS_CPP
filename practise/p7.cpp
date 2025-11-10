#include <iostream>
using namespace std;
class Matrix
{
public:
    int arr[3][3];
    void input()
    {
        cout << "Enter elements of 3x3 matrix:" << endl;
        int *ptr = &arr[0][0];
        for (int i = 0; i < 9; i++)
        {
            cin >> *ptr;
            ptr++;
        }
        ptr = &arr[0][0];
        cout << "The matrix is:" << endl;
        for (int i = 0; i < 9; i++)
        {
            cout << *ptr << " ";
            ptr++;
            if (!((i + 1) % 3))
            {
                cout << endl;
            }
        }
    }
    // friend int sumofElements(int *ptr, int size);
};
int sumofElements(int *ptr, int size)
{
    // Recursive function to calculate sum of elements
    if (size <= 0)
    {
        return 0;
    }
    return *ptr + sumofElements(++ptr, --size);
}
int main()
{
    Matrix m;
    m.input();
    int sum = sumofElements(&m.arr[0][0], 9);
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}