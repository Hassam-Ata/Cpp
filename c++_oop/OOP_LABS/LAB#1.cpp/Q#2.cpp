#include <iostream>
#include <cmath>
using namespace std;
void inches_to_feet(int height_inches)
{
    int hight_feet = height_inches / 12;
    int remaining_inches = height_inches % 12;

    cout << "This is equivalent to " << round(hight_feet * 10) / 10 << "'" << remaining_inches << "''";
}
int main()
{
    int height_inches;
    char inch_symbol;
    cout << "Enter your height in inches: ";
    cin >> height_inches >> inch_symbol;
    inches_to_feet(height_inches);
    return 0;
}


