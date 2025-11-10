#include <iostream>
using namespace std;
class Add{
    public:
    int x,y;
    void setData(int a, int b){
        this->x = a;
        this->y = b;
    }
    int add(){
        return this->x + this->y;
    }
};
int main(){

    Add obj;
    obj.setData(10,20);
    cout << "Sum: " << obj.add() << endl;
    return 0;
}