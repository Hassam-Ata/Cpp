#include <iostream>
#include <cmath>
using namespace std;

void farenheit_to_celcius(float temperature)
{
    float celcius = (5.0 / 9.0) * (temperature - 32);
    cout << "Temperature in celsius is: " << round(celcius * 10) / 10;
}
void celsius_to_farenheit(float temperature)
{
    float farenheit = temperature * (9.0 / 5.0) + 32;
    cout << "Temperature in celsius is: " << round(farenheit * 10) / 10;
}
int main()
{
    float temperature;
    cout << "Enter temperature in farenheit: ";
    cin >> temperature;
    farenheit_to_celcius(temperature);
    cout << endl;
    cout << "Enter temperature in celsius ";
    cin >> temperature;
    celsius_to_farenheit(temperature);
    return 0;
}


