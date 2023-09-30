#include <iostream>
using namespace std;

void reverse(int number)
{
    int ans = 0;
    while (number != 0)
    {
        int digit = number % 10;
        ans = (ans * 10) + digit;
        number = number / 10;
    }
    cout << "Reverse of this value is: " << ans;
}

int main()
{
    int number;
    cout << "Enter a 2 digit integer value: ";
    cin >> number;
    reverse(number);
    return 0;
}



