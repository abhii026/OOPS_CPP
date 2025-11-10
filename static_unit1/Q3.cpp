#include <iostream>
#include <iomanip>
using namespace std;
//Recursive function to calculate sum of even numbers in a given range  
int sumOfEvenOdd(int start, int end){
    int sum=0;
    if(start>end){
        return 0;
    }
    if(start%2==0){
        return start+sumOfEvenOdd(start+1,end);
    }
    return sumOfEvenOdd(start+1,end);
}
int main(){
    int start,end ,sum;
    cin>>start;
    cin>>end;
    cout<<sumOfEvenOdd(start,end);
    return 0;
}