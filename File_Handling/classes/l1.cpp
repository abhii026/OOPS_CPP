#include <iostream>
#include <fstream>
using namespace std;
class Test
{
public:
    int x;
    int y;
    Test(int a, int b) : x(a), y(b) {}
    Test() {}
};
int main()
{
    fstream file;
    file.open("data1.bin", ios::out | ios::in | ios::binary);
    Test obj1(2, 34), obj2, obj3(3, 54);
    file.write(reinterpret_cast<char *>(&obj1), sizeof(Test));
    file.write(reinterpret_cast<char *>(&obj3), sizeof(Test));
    file.seekg(sizeof(Test), ios::beg);
    file.read(reinterpret_cast<char *>(&obj2), sizeof(Test));
    cout << obj2.x << " " << obj2.y;
    return 0;
}