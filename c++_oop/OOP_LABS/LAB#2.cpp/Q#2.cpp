#include <iostream>
using namespace std;
int main()
{

    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows for Matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> colsA;
    cout << "Enter the number of rows for Matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> colsB;
    int MatrixA[rowsA][colsA], MatrixB[rowsB][colsB];

    //  input for elements of Matrix A
    cout << "Enter the elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++)
    {
        for (int j = 0; j < colsA; j++)
        {
            cout << "MatrixA[" << i << "][" << j << "]: ";
            cin >> MatrixA[i][j];
        }
    }
    //  input for elements of Matrix B

    cout << "Enter the elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++)
    {
        for (int j = 0; j < colsB; j++)
        {
            cout << "MatrixB[" << i << "][" << j << "]: ";
            cin >> MatrixB[i][j];
        }
    }
    if (rowsA == rowsB && colsA == colsB)
    {

        int MatrixC[rowsA][colsA];
        cout << "Matrix Addition (Matrix A + Matrix B):" << endl;
        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < colsA; j++)
            {
                MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];
                cout << MatrixC[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Matrix addition is not possible " << endl;
    }
    //  Check if multiplication is possible
    if (colsA == rowsB)
    {

        int MatrixD[rowsA][colsB];
        cout << "Matrix Multiplication (A * B):" << endl;
        for (int i = 0; i < rowsA; i++)
        {
            for (int j = 0; j < colsB; j++)
            {
                MatrixD[i][j] = 0;
                for (int k = 0; k < colsA; k++)
                {
                    MatrixD[i][j] += MatrixA[i][k] * MatrixB[k][j];
                }
                cout << MatrixD[i][j] << " ";
            }
            cout << endl
        }
    }
    else
    {
        cout << "Matrix multiplication is not possible " << endl;
    }
    return 0;
}

































