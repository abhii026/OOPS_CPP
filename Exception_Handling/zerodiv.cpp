#include <iostream>
using namespace std;
int main(){
    int a;
    int b ;
    try{
        cout << "Enter two integers: ";
        cin >> a >> b;
        if(b == 0){
            throw "Division by zero error";
        }
        cout << "Result: " << a / b << endl;
    }
    catch(const char* e){
        cout << "Caught an exception: " << e << endl;
    }
    return 0;
}