#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file("insert.txt", ios::out);
    file << "Hello World" << endl;
    file << "Hello LPU" << endl;
    file.close();
    return 0;
}