#include <iostream>
using namespace std;
void sum_average(int number1, int number2)
{
    int sum = number1 + number2;
    int average = (number1 + number2) / 2;
    cout << "Sum is: " << sum << endl;
    cout << "Average is: " << average << endl;
}
int main()
{
    int number1, number2;
    cout << "Enter first number: ";
    cin >> number1;
    cout << "Enter second number: ";
    cin >> number2;
    sum_average(number1, number2);

    return 0;
}