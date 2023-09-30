#include <iostream>
using namespace std;
void numeric(char chTen, char chUnit)
{
    int ValueTen, ValueUnit, M;
    ValueTen = chTen - '0';
    ValueUnit = chUnit - '0';

    M = ValueTen * 10 + ValueUnit;
    cout << "Numeric Value is: " << M;
}
int main()

{
    char chTen, chUnit;
    cout << "Enter a two digit number: ";
    cin >> chTen >> chUnit;
    numeric(chTen, chUnit);

    return 0;
}

