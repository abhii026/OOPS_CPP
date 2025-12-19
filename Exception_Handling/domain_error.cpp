#include <iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    try{
        if(b==0){
            throw domain_error("!! Division by zero !!");
        }
        cout<<"Result: "<<a/b<<endl;
    }
    catch(const domain_error& e){
        cout<<"Caught an exception: "<<e.what()<<endl;
    }
    cout<<"Program completed successfully."<<endl;
    return 0;
}