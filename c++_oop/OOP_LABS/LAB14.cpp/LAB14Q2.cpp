#include <iostream>
using namespace std;

template<typename T>
T sumOfArray(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size = 5;
    int intArray[size];
    float floatArray[size];

    cout << "Enter 5 integer values: ";
    for (int i = 0; i < size; i++) {
        cin >> intArray[i];
    }

    
    cout << "Enter 5 float values: ";
    for (int i = 0; i < size; i++) {
        cin >> floatArray[i];
    }

    
    int intSum = sumOfArray(intArray, size);
    float floatSum = sumOfArray(floatArray, size);

    cout << "Sum of integer values: " << intSum << endl;
    cout << "Sum of float values: " << floatSum << endl;

    return 0;
}




















