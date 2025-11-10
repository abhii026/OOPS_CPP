#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{

    string str = "Hello World";
    float d = 14.3214;
    cout << str << endl;
    cout<<"setw: "<<endl;
    cout << setw(20) << str << endl;
    cout<<"setw: "<<endl;
    cout << setw(10) << str << endl;
    cout<< "setfill: " <<endl;
    cout << setfill('*') << setw(20) << str << endl;
    cout<<"setprecision: "<<endl;
    cout << setprecision(3) << d << endl;
    cout<<"fixed:"<<endl;
    cout << fixed << setprecision(3) << d << endl;
    cout<<"scientific: "<<endl;
    cout << scientific << setprecision(3) << d << endl;
    cout<<"defaultfloat: "<<endl;
    cout << defaultfloat << setprecision(3) << d << endl;
    cout<<"boolalpha:"<<endl;
    cout << boolalpha << (5 > 3) << endl; // prints true
    cout<<"noboolalpha: "<<endl;
    cout << noboolalpha << (5 > 3) << endl; // prints 1 
    return 0;
}