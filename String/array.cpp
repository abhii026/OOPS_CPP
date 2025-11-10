#include <iostream>
using namespace std;
int main()
{

    int arr[3][3];
    cout<<"Enter elements of 3x3 array:"<<endl; 
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Element ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    cout<<"The elements of the array are:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}