#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file("insert.txt", ios::out | ios::in);
    int n;
    cout << "Enter pos: ";
    cin >> n;
    string inputStr;
    cout << "Input str: ";
    // getline(cin, inputStr);
    cin >> inputStr;
    string str = " ";
    file.clear();
    file.seekg(0, ios::beg);
    while (!file.eof())
    {
        string s;
        getline(file, s);
        str += s + "\n";
    }
    // cout << str << endl;
    file.clear();
    file.seekp(n, ios::beg);
    file << inputStr;
    file << str;
    return 0;
}