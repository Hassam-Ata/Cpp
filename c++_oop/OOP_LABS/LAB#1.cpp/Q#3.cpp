#include <iostream>
using namespace std;
void time(int seconds)
{
    int minutes, hours;
    hours = seconds / 3600;
    seconds = seconds % 3600;
    minutes = seconds / 60;
    seconds = seconds % 60;
    cout << "Hours in time is: " << hours << endl;
    cout << "Minutes in time: " << minutes << endl;
    cout << "Seconds in time is: " << seconds << endl;
}
int main()
{
    int seconds, minutes, hours;
    cout << "Enter the time in seconds: ";
    cin >> seconds;
    time(seconds);

    return 0;
}