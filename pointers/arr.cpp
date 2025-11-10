#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    

    int *ptr1;      // pointer to int
    int (*ptr2)[5]; // pointer to array of 5 ints

    ptr1 = arr;  // points to first element
    ptr2 = &arr; // points to the whole array
    cout << "Array elements using different pointers:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << ", Address: " << &arr[i] << endl;
    }

    cout << "\nAccessing elements using ptr1 and ptr2:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Using ptr1: " << *(ptr1 + i) << ", Address: " << (ptr1 + i) << endl;
    }

    cout << "\nUsing ptr2:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Using ptr2: " << (*ptr2)[i] << ", Address: " << (ptr2 + i) << endl;
    }

    // Pointers Arithmetic demonstration.
    cout << "\nPointer details:\n";
    cout << "Address stored in ptr1: " << ptr1 << endl;
    cout << "Address stored in ptr2: " << ptr2 << endl;
    cout << "Size of ptr1: " << sizeof(ptr1) << " bytes" << endl;
    cout << "Size of ptr2: " << sizeof(ptr2) << " bytes" << endl;

    // cout << "ptr1: " << ptr1 << ", *ptr1: " << *ptr1 << endl;
    // cout << "ptr2: " << ptr2 << ", *ptr2[0]: " << (*ptr2)[0] << endl;

    // cout << "\nPointer arithmetic:\n";
    // cout << "ptr1 + 1 points to: " << (ptr1 + 1) << ", value: " << *(ptr1 + 1) << endl;
    // cout << "ptr2 + 1 points to: " << (ptr2 + 1) << ", value: " << *(*ptr2 + 1) << endl;
    return 0;
}
// This program demonstrates the difference between a pointer to an integer and a pointer to an array of integers in C++. It shows how pointer arithmetic works differently for each type of pointer.

// A pointer to an integer points to a single integer element, while a pointer to an array points to the entire array. The program also illustrates how to access array elements using both types of pointers.

// Note: Uncomment the commented lines to see additional pointer information and arithmetic in action.

// Note: The output addresses may vary each time you run the program.
