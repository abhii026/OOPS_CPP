#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // scope resolution operator(::) is used to access the members of a namespace
    // ios::trunc is used to delete all the previous content of the file and start fresh
    // ios::app is used to append the content to the end of the file
    // ios::in is used to read from the file
    // ios::out is used to write to the file
    // ios::ate is used to move the pointer to the end of the file
    // ios::binary is used to open the file in binary mode
    fstream file("test.txt", ios::out | ios::in); // Open file in both read and write mode
    file << "Hello World!" << endl;
    // file.close(); // Close the file after writing
    file.flush(); // To ensure all output operations are completed before switching to input operations

    string str;
    file.seekg(0); // Move the get pointer to the beginning of the file
    getline(file, str);
    cout << str; // Output: Hello World!
    file.flush();
    return 0;
}