#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inFile;
    inFile.open("test.txt");
    string str;
    // inFile>>str;  //TAKE ONLY FIRST WORD
    getline(inFile, str); //TAKE THE REST OF THE LINE
    cout << str;
    return 0;
}