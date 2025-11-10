#include <iostream>
using namespace std;

// Function overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists (different types or number of parameters). The compiler determines which function to call based on the arguments passed during the function call.

// Function to add two integers
void add(int a, int b)
{
    cout << a + b << endl;
}

// Function to add two double values
void add(double a, double b)
{
    cout << a + b << endl;
}
int main()
{
    add(5, 10);
    add(5.5, 10.246);
    return 0;
}