#include <iostream>
#include <iomanip>
using namespace std;
class Participant
{
public:
    string name;
    double weight, workoutDuration;
    void setValues()
    {
        cin >> name >> weight >> workoutDuration;
    }
};
int main()
{
    int n;
    cin >> n;
    double tw = 0;
    Participant p[n];
    for (int i = 0; i < n; i++)
    {
        p[i].setValues();
    }

    for (int i = 0; i < n; i++)
    {
        tw += p[i].workoutDuration / 60.0;
    }
    cout << fixed << setprecision(2) << tw << endl;

    return 0;
}