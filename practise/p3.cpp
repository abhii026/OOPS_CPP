#include <iostream>
using namespace std;
class VolumeCalculator;
class box
{
private:
    int length, breadth, height;

public:
    void setValues()
    {
        cout << "Enter length, breadth and height: " << endl;
        cin >> length >> breadth >> height;
    }
    friend class VolumeCalculator;
    friend void CompareVolume(box b1, box b2, VolumeCalculator calc);
};
class VolumeCalculator
{
public:
    int volume;
    int VolumeCalc(box obj)
    {
        volume = obj.length * obj.breadth * obj.height;
        return volume;
    }
};
void CompareVolume(box b1, box b2, VolumeCalculator calc)
{
    int v1 = calc.VolumeCalc(b1);
    int v2 = calc.VolumeCalc(b2);
    if (v1 > v2)
        cout << "Box 1 is larger.\n";
    else if (v2 > v1)
        cout << "Box 2 is larger.\n";
    else
        cout << "Both boxes are equal.\n";
}

int main()
{
    box b1, b2;
    b1.setValues();
    b2.setValues();
    VolumeCalculator calc;
    cout << "Box 1: " << calc.VolumeCalc(b1) << endl;
    cout << "Box 2: " << calc.VolumeCalc(b2) << endl;
    CompareVolume(b1, b2, calc);
    return 0;
}