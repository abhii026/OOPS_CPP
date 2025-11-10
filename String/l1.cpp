#include <iostream>
#include <string>
using namespace std;
int main()
{

    string str1 = "Hello"; // Using parameterized constructor
    string str2 = str1;    // Using copy constructor
    string str3("World");  // Using parameterized constructor
    cout << str3 << endl;
    cout << str1 << " " << " " << str3 << endl;

    int len1 = str1.length(); // length of str1
    int len2 = str1.size();   // size of str1
    cout << "Length of str1: " << len1 << endl;
    cout << "Size of str1: " << len2 << endl;
    cout << "Capacity of str1: " << str1.capacity() << endl;    // capacity of str1
    cout << "Is str1 empty? " << str1.empty() << endl;          // checks if str1 is empty or not
    cout << "Substring of str1: " << str1.substr(0, 3) << endl; // substring from index 0 to 2
    cout << "Find: " << str1.find("el") << endl;                // finds index of substring "el"
    str2.append(" Everyone");                                   // appends " Everyone" to str2
    cout << "Appended str2: " << str2 << endl;
    str2.insert(6, "LPU "); // inserts "LPU " at index 6 in str2
    cout << "Inserted str2: " << str2 << endl;
    str2.replace(6, 4, "Lovely Professional University "); // replaces 4 characters at index 6
    cout << "Replaced str2: " << str2 << endl;
    str2.erase(6, 30); // erases 30 characters from index 6
    cout << "Erased str2: " << str2 << endl;
    str2.clear(); // clears str2
    cout << "Cleared str2: " << str2 << endl;
    cout << "Empty check after clear: " << str2.empty() << endl;
    return 0;
}