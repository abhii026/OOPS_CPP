#include <iostream>
using namespace std;
int main(){

    int n=10;
    int *ptr=&n;
    int **ptr1=&ptr;
    int ***ptr2=&ptr1;
    cout<<n<<endl;          // prints 10
    cout<<*ptr<<endl; 
    cout<<*ptr1<<endl;     // prints 10
    cout<<**ptr1<<endl;    // prints 10
    cout<<***ptr2<<endl;   // prints 10

    return 0;
}