#include <iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"A's Print!"<<endl;
    }
};
class B{
    public:
    void print(){
        cout<<"B's Print!"<<endl;
    }
};
class C: public A, public B{
    public:
    void print(){
        A::print();
        B::print();
    }
};
int main(){
    C objC;
    // objC.A::print();
    // objC.B::print();
    objC.print();
    return 0;
}