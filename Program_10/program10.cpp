#include <iostream>   // Input Output

// Base Class
class Vehicle
{
public:
    // Virtual Function
    virtual void move() const
    {
        std::cout << "Vehicle is moving\n";
    }

    // Virtual Destructor
    virtual ~Vehicle() = default;
};

// Car Class
class Car : public Vehicle
{
public:
    // Override Function
    void move() const override
    {
        std::cout << "Car moves on roads\n";
    }
};

// Boat Class
class Boat : public Vehicle
{
public:
    // Override Function
    void move() const override
    {
        std::cout << "Boat moves on water\n";
    }
};

// Main Function
int main()
{
    // Create Objects
    Car car;
    Boat boat;

    // Call Functions
    car.move();
    boat.move();

    return 0;   // End Program
}