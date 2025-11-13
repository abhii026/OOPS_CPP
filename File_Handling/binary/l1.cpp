#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("data.bin", ios::out | ios::in | ios::binary | ios::app);
    int a = 10, b;
    file.write(reinterpret_cast<char *>(&a), 4);
    file.seekg(0, ios::beg);
    file.read(reinterpret_cast<char *>(&b), 4);
    cout << b;
    return 0;
}