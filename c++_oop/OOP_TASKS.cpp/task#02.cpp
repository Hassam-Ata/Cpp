#include <iostream>
using namespace std;
void checkFactor(int num1, int num2, int num3)
{
    if (num3 % num1 == 0 && num3 % num2 == 0)
    {
        cout << num1 << " and " << num2 << " are the factors of " << num3;
    }
    else if (num3 % num1 == 0)
    {
        cout << num1 << " is the factors of " << num3;
    }
    else if (num3 % num2 == 0)
    {

        cout << num2 << "is the factors of " << num3;
    }
    else
    {
        cout << "Both " << num1 << " and " << num2 << " are not the factors of " << num3;
    }
}

int main()
{
    int number1, number2, number3;
    cout << "Enter number 1: ";
    cin >> number1;
    cout << "Enter number 2: ";
    cin >> number2;
    cout << "Enter number 3: ";
    cin >> number3;
    checkFactor(number1, number2, number3);
    return 0;
}