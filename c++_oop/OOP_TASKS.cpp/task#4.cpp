#include <iostream>
using namespace std;

// Base class
class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};

// Derived class Triangle
class Triangle : public Shape
{
public:
    int getArea()
    {
        return (width * height) / 2;
    }
};

// Derived class Square, inheriting from Shape
class Square : public Shape
{
public:
    int getArea()
    {
        return (width * width);
    }
};

int main()
{
    Rectangle rect;
    Triangle tri;
    Square sqr;

    // Set dimensions for the rectangle
    rect.setWidth(5);
    rect.setHeight(10);

    // Set dimensions for the triangle
    tri.setWidth(6);
    tri.setHeight(8);

    // Set dimensions for the square
    sqr.setWidth(4);
    sqr.setHeight(4);

    // Calculate and display areas
    cout << "Rectangle Area: " << rect.getArea() << endl;
    cout << "Triangle Area: " << tri.getArea() << endl;
    cout << "Square Area: " << sqr.getArea() << endl;

    return 0;
}
