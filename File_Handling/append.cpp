#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("sample.txt", ios::in | ios::out | ios::app); // Open file in append mode
    file << "This is an appended line." << endl;            // Append text to the file
    file << "Appending another line." << endl;              // Append another line
    file.flush();
    string str;
    file.seekp(0); // Move the get pointer to the beginning of the file
    while (!file.eof())
    { // Read and display the file content
        getline(file, str);
        cout << str << endl;
    }
    file.close(); // Close the file

    return 0;
}