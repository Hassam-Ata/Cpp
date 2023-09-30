#include <iostream>
using namespace std;
class Shape {
public:
    
    double calculateArea(double length, double width) {
        return length * width;
    }


    double calculateArea(double side) {
        return side * side;
    }

   
};

int main() {
    Shape shape;

    

    cout << "Area of rectangle: " <<shape.calculateArea(4.5, 3.2)<<endl;
    cout << "Area of square: " << shape.calculateArea(5.0)<< endl;
    

    return 0;
}
