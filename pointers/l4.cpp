#include <iostream>
using namespace std;
class Prouct
{
public:
    int id;
    float price;
    //method chaining using this pointer
    Prouct& setId(int id){
        this->id = id;
        return *this;
    
    }
    Prouct& setPrice(float price){
        this->price = price;        
        return *this;
    }
};
int main(){

    Prouct p, q;
    p.setId(1).setPrice(99.99);
    cout << "Product ID: " << p.id << endl;
    cout << "Product Price: " << p.price << endl;
    q.setId(2).setPrice(149.99);
    cout << "Product ID: " << q.id << endl;
    cout << "Product Price: " << q.price << endl;

    return 0;
}