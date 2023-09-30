#include <iostream>
using namespace std;
void conversion(int amount)
{
    int numberof_1000, numberof_500, numberof_100, numberof_50, numberof_10, numberof_5, numberof_2;

    numberof_1000 = amount / 1000;
    amount = amount % 1000;

    numberof_500 = amount / 500;
    amount = amount % 500;

    numberof_100 = amount / 100;
    amount = amount % 100;

    numberof_50 = amount / 50;
    amount = amount % 50;

    numberof_10 = amount / 10;
    amount = amount % 10;

    numberof_5 = amount / 5;
    amount = amount % 5;

    numberof_2 = amount / 2;
    amount = amount % 2;

    cout << "1000's in the given amount is: " << numberof_1000 << endl;
    cout << "500's in the given amount is:  " << numberof_500 << endl;
    cout << "100's in the given amount is:  " << numberof_100 << endl;
    cout << "50's in the given amount is:   " << numberof_50 << endl;
    cout << "10's in the given amount is:   " << numberof_10 << endl;
    cout << "5's in the given amount is:    " << numberof_5 << endl;
    cout << "2's in the given amount is:    " << numberof_2 << endl;
}

int main()
{
    int amount;
    cout << "Enter amount in rupees: ";
    cin >> amount;
    conversion(amount);

    return 0;
}








