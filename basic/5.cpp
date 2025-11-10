#include <iostream>
using namespace std;
// Always write default arguments from right to left.
void print(string name, int age = 20)
{
    cout << "Name is: " << name << " and Age is: " << age << endl;
}

int main()
{
    // print(22, "Abhishek"); //
    print("Abhishek", 22);
    print("Abhishek");
    return 0;
}
