#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
 
    virtual double getArea() = 0;
};

class Triangle : public Shape
{
public:
    Triangle(int w, int h) : width(w), height(h) {}

    double getArea() override
    {
        return (width * height) / 2.0;
    }

private:
    int width;
    int height;
};

class Circle : public Shape
{
public:
    Circle(int r) : radius(r) {}

    double getArea() override
    {
        return 3.14159265359 * radius * radius; // Approximation of pi
    }

private:
    int radius;
};

int main(void)
{
    Triangle tri(5, 7);
    Circle circle(3);

    cout << "Total Triangle area: " << tri.getArea() << endl;
    cout << "Total Circle area: " << circle.getArea() << endl;

    return 0;
}
