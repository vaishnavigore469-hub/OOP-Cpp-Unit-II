#include <iostream>   // Input Output

// Abstract Class
class Shape
{
public:
    // Pure Virtual
    virtual double area() const = 0;

    // Virtual Destructor
    virtual ~Shape() = default;
};

// Rectangle Class
class Rectangle : public Shape
{
private:
    double length;   // Length
    double width;    // Width

public:
    // Constructor
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Calculate Area
    double area() const override
    {
        return length * width;
    }
};

// Circle Class
class Circle : public Shape
{
private:
    double radius;   // Radius

public:
    // Constructor
    explicit Circle(double givenRadius)
        : radius(givenRadius) {}

    // Calculate Area
    double area() const override
    {
        return 3.141592653589793 * radius * radius;
    }
};

// Main Function
int main()
{
    // Create Objects
    Rectangle rectangle(6.0, 4.0);
    Circle circle(3.0);

    // Display Areas
    std::cout << "Rectangle Area: "
              << rectangle.area() << '\n';

    std::cout << "Circle Area: "
              << circle.area() << '\n';

    return 0;   // End Program
}