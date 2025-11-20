// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        double fee;
    Student(){
        cin>>name>>roll>>fee;
    }
    Student(Student &obj){
        name=obj.name;
        roll=obj.roll;
        fee=obj.fee;
    }
    void print(){
        cout<<roll<<" "<<name<< " " <<fee<<endl;
    }
};
int main() {
    Student std1;
    Student std2(std1);
    cout<<fixed<<setprecision(2);
    cout<<"Student Details: "<<endl;
    std1.print();
    cout<<"Copied Student Details: "<<endl;
    std2.print();

    return 0;
}