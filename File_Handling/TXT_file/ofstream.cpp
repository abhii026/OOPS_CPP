#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile;
    outFile.open("test.txt");
    outFile << "Hello, World!";
    return 0;
}