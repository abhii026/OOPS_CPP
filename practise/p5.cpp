#include <iostream>
using namespace std;
class Number
{
private:
    int num;

public:
    void setValues(int n)
    {
        num = n;
    }
    int getValue()
    {
        return num;
    }
    friend void swapValues(Number &x, Number &y);
};
void swapValues(Number &x, Number &y){
    int a = x.num;
    x.num = y.num;
    y.num = a;
}

int main()
{
    Number n1, n2;
    n1.setValues(2);
    n2.setValues(5);
    swapValues(n1, n2);
    cout << n1.getValue() << " " << n2.getValue() << endl;

    return 0;
}