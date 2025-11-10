#include <iostream>
using namespace std;
// Recursion function
void fun(int n)
{
    // if (n > 0)
    // {   
    //     cout << n << " ";
    //     fun(n - 1); // recursive call
    //     cout << n << " ";
    // }
    if(n==0) return;
    cout<<n--<<" ";
    fun(n);
}
int main()
{
    int n = 5;
    fun(n);
    cout<<"done";
    return 0;
}