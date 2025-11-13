#include <iostream>
#include <fstream>
using namespace std;   
int main()
{   
    fstream file;
    file.open("sample.txt", ios::in | ios::out | ios::ate);

    // file.seekp(0, ios::end); // Move the put pointer to the end of the file  
    // cout << file.tellp() << endl; // Display the current position of the put pointer
    // file << "This text is written at the end of the file." << endl;

    // file.seekp(6, ios::beg); // Move the put pointer to the beginning
    // file << "start";
    // cout << file.tellp() << endl; // Display the current position of the put pointer
    file.close();
    return 0;
}
// sequential access to a file with put pointer at the end using ios::ate
// random access to a file by moving the put pointer to a specific location