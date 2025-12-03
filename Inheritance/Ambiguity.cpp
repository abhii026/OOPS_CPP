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
class C: public A, public B{};
int main(){
    C objC;
    objC.A::print();
    objC.B::print();
    return 0;
}