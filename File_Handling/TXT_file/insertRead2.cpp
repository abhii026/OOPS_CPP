#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

int main()
{
    // Read entire file into a string, insert new text at position n, then rewrite file.
    ifstream in("insert.txt", ios::in | ios::binary);
    string content;
    if (in)
        content.assign((istreambuf_iterator<char>(in)), istreambuf_iterator<char>());
    in.close();

    int n;
    if (!(cin >> n)) return 1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // consume newline

    if (n < 0 || n > static_cast<int>(content.size())) {
        cerr << "Invalid position\n";
        return 1;
    }

    string Inputstr;
    getline(cin, Inputstr); // text to insert

    // Insert input at position n
    content.insert(content.begin() + n, Inputstr.begin(), Inputstr.end());

    // Rewrite the file with the new content
    ofstream out("insert.txt", ios::out | ios::binary | ios::trunc);
    if (!out) {
        cerr << "Failed to open file for writing\n";
        return 1;
    }
    out << content;
    out.close();

    return 0;
}