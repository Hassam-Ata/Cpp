#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    float result;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    float *ptr_num1 = &num1;
    float *ptr_num2 = &num2;
    float *ptr_result = &result;

    switch (op)
    {
    case '+':
        *ptr_result = *ptr_num1 + *ptr_num2;
        break;
    case '-':
        *ptr_result = *ptr_num1 - *ptr_num2;
        break;
    case '*':
        *ptr_result = *ptr_num1 * *ptr_num2;
        break;
    case '/':
        if (*ptr_num2 != 0)
            *ptr_result = *ptr_num1 / *ptr_num2;
        else
        {
            cout << "Error: Division by zero not allowed.";
            return 1;
        }
        break;
    default:
        cout << "Error: Invalid operator.";
        return 1;
    }

    cout << "Result: " << *ptr_result;

    return 0;
}




