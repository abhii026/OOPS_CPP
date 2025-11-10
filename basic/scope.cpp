#include <iostream>
using namespace std;
class Test{
    public:
    string name;
    int age;
    void setValues(string n, int a=20){
        name=n;
        age=a;
    }
    void print();
};
int main(){
    Test obj, obj1;
    obj.setValues("Abhishek", 21);
    obj.print();    
    
    return 0;
}