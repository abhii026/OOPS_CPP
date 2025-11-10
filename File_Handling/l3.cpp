#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{

    fstream file;
    file.open("test1.txt", ios::out | ios::in | ios::trunc); // Open file in read and write mode, truncating existing content
    file << "Hello World!!" << endl;
    file << "Hello LPU!!";
    file.seekg(2, ios::beg); // Move get pointer to the 2nd position from the beginning
    string str;
    getline(file, str);
    cout << str; // Output: llo World!Hello LPU
    file.flush();
    file.seekp(5, ios::beg); // Move put pointer to the 5th position from the beginning
    file << " Everyone";     // Overwrite content starting from the 5th position
    string str2;
    file.seekg(0, ios::beg); // Move get pointer back to the beginning
    while(!file.eof()){
        getline(file, str2);
        cout << endl
             << str2; // Output: Hello Everyone!!Hello LPU  
    }
    file.close();
    return 0;
}