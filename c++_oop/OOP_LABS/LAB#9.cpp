#include<iostream>
using namespace std;

class Shape {
protected:
    double base, height;
public:
    void get_data() {
        cout << "Enter the base: ";
        cin >> base;
        cout << "Enter the height: ";
        cin >> height;
    }
    virtual void display_area() {
        cout << "Area of the shape is: " << base * height << endl;
    }
};

class Triangle : public Shape {
public:
    void display_area() {
        cout << "Area of the triangle is: " << 0.5 * base * height <<"sq.units"<< endl;
    }
};

class Rectangle : public Shape {
public:
    void display_area() {
        cout << "Area of the rectangle is: " << base * height <<"sq.units"<< endl;
    }
};

int main() {
    Shape *shape;
    Triangle triangle;
    Rectangle rectangle;
    int choice;
    cout << "Enter 1 for triangle, 2 for rectangle: ";
    cin >> choice;
    if (choice == 1) {
        shape = &triangle;
    }
    else if (choice == 2) {
        shape = &rectangle;
    }
    else {
        cout << "Invalid choice" << endl;
        return 0;
    }
    shape->get_data();
    shape->display_area();
    return 0;
}