#include <iostream>
using namespace std;
class Time
{
public:
    int hrs, min;
    void display()
    {
        cout << hrs << ":" << min << endl;
    }
    Time(int m)
    {
        hrs = m / 60;
        min = m % 60;
    }
    operator int()
    {
        return hrs * 60 + min;
    }
};
int main()
{
    int m = 1972;
    Time obj = m;
    obj.display();
    int a = obj;
    cout << a << endl;
    return 0;
}