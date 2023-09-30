#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float x1, y1, x2, y2;
    char parantheses, comma;

    cout << "Enter coordinates of the first point: ";
    cin >> parantheses >> x1 >> comma >> y1 >> parantheses;
    cout << "Enter coordinates of the second point: ";
    cin >> parantheses >> x2 >> comma >> y2 >> parantheses;

    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << fixed << setprecision(2);
    cout << "The length of the line segment is: " << distance << " units";

    return 0;
}


