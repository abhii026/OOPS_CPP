#include <iostream>
using namespace std;

int main() {
    void *ptr;      // Step 1: Create a void pointer
    int a = 10;
    double b = 10.29;

    ptr = &a;       // Step 2: Point to integer 'a'
    cout << "Address of a: " << ptr << endl;
    cout << *(int*)ptr << endl;  // Step 3: Type cast to int before printing

    ptr = &b;       // Step 4: Point to double 'b'
    cout << "Address of b: " << ptr << endl;
    cout << *(double*)ptr << endl;  // Step 5: Type cast to double before printing

    return 0;
}
// This program demonstrates the use of void pointers in C++. A void pointer can hold the address of any data type, but it must be type-cast to the appropriate type before dereferencing.
