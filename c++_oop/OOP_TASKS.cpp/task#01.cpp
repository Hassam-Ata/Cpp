#include <iostream>
using namespace std;
int main()
{

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 18; col++)
        {
            if ((row == 0 && col > 1 && col < 5) || (row == 4 && col > 1 && col < 5) || (row == 1 && col == 1) || (row == 2 && col == 0) || (row == 3 && col == 1))
            {
                cout << "C";
            }
            else if ((row == 2 && col > 4 && col < 10) || col == 7)
            {
                cout << "+";
            }
            else if ((row == 2 && col > 12 && col < 18) || col == 15)
            {
                cout << "+";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}