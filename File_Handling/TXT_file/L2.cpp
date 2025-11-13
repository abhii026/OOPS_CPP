#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outFile;
    ifstream inFile;

    outFile.open("test1.txt");
    outFile << " Hello, World!!\n"
            << endl;
    outFile << "Hello LPU!!\n"
            << endl;
    outFile << "Hello, C++!!\n"
            << endl;
    // outFile.close();
    outFile.flush(); // Ensure all data is written to the file
    inFile.open("test1.txt");
    string str;
    // //print 1 line only
    // getline(inFile, str);
    // cout << str << endl; // Output: Hello, World!!
    while (!inFile.eof())
    {
        getline(inFile, str);
        cout << str << endl;
    }
    inFile.close();

    return 0;
}