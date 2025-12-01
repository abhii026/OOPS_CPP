#include <iostream>
using namespace std;
class A
{
public:
    A(char c) {}
};
class B : public A
{
public:
    B(int x, char c) : A(c) {}
};
int main()
{
    B obj(10, 'a');

    return 0;
}