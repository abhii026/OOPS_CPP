#include <iostream>
using namespace std;
class Car
{
public:
    string brand;
    string color;
    int eng;
    float mil;
    bool isHyb;
    void print()
    {
        cout << "I have a " << brand << " with " << color << " color." << "With an engine capacity of " << eng << "cc and mileage of " << mil << "km/l." << endl;
    }
};
// void print(string name, int eng, string color, float mil, bool isHyb)
// {
//     cout << "I have a " << name << " with " << color << " color." << "With an engine capacity of " << eng << "cc and mileage of " << mil << "km/l." << endl;
// }

int main()
{
    Car Car1, Car2;
    Car1.brand = "Honda";
    Car1.color = "Black";
    Car1.eng = 1500;
    Car1.mil = 15.5;
    Car1.isHyb = false;

    Car2.brand = "Toyota";
    Car2.color = "White";
    Car2.eng = 1300;
    Car2.mil = 18.5;
    Car2.isHyb = true;

    // print(Car1.brand, Car1.eng, Car1.color, Car1.mil, Car1.isHyb);
    // print(car2.brand, car2.eng, car2.color, car2.mil, car2.isHyb);
    Car1.print();
    Car2.print();

    return 0;
}
