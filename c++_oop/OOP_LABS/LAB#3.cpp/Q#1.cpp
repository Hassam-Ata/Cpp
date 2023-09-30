#include <iostream>
using namespace std;
class DM
{
private:
    float distance_in_meters;
    float distance_in_centimeters;

public:
    DM()
    {
        distance_in_meters = 0;
        distance_in_centimeters = 0;
    }
    void setvalues(float meters, float centimeters)
    {
        distance_in_meters = meters;
        distance_in_centimeters = centimeters;
    }
    void display()
    {
        cout << "Distance in meters is: " << distance_in_meters << " meters" << endl;
        cout << "Distance in centimeters is: " << distance_in_centimeters << " centimeters" << endl;
    }
};
int main()
{
    DM objA;
    float meters, centimeters;
    cout << "Enter distance in meters: ";
    cin >> meters;
    cout << "Enter distance in centimeters: ";
    cin >> centimeters;
    objA.setvalues(meters, centimeters);
    objA.display();

    return 0;
}



