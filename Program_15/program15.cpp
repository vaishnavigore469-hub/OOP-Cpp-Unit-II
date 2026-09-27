#include <iostream>   // Input Output
#include <string>     // String
#include <utility>    // Move

// Base Class
class Vehicle
{
protected:
    std::string registrationNumber;   // Registration Number
    double ratePerDay;                // Daily Rate

public:
    // Constructor
    Vehicle(std::string registration, double rate)
        : registrationNumber(std::move(registration)),
          ratePerDay(rate) {}

    // Calculate Rent
    virtual double calculateRent(int days) const
    {
        return ratePerDay * days;
    }

    // Display Vehicle
    virtual void display() const
    {
        std::cout << "Registration: "
                  << registrationNumber << '\n';

        std::cout << "Rate per day: "
                  << ratePerDay << '\n';
    }

    // Virtual Destructor
    virtual ~Vehicle() = default;
};

// Car Class
class Car : public Vehicle
{
private:
    int numberOfDoors;   // Number Doors

public:
    // Constructor
    Car(std::string registration, double rate, int doors)
        : Vehicle(std::move(registration), rate),
          numberOfDoors(doors) {}

    // Display Car
    void display() const override
    {
        Vehicle::display();

        std::cout << "Doors: "
                  << numberOfDoors << '\n';
    }
};

// Bike Class
class Bike : public Vehicle
{
private:
    int engineCapacity;   // Engine Capacity

public:
    // Constructor
    Bike(std::string registration, double rate, int capacity)
        : Vehicle(std::move(registration), rate),
          engineCapacity(capacity) {}

    // Calculate Rent
    double calculateRent(int days) const override
    {
        return ratePerDay * days * 0.8;
    }

    // Display Bike
    void display() const override
    {
        Vehicle::display();

        std::cout << "Engine Capacity: "
                  << engineCapacity << " cc\n";
    }
};

// Main Function
int main()
{
    // Create Objects
    Car car("MH12AB6050", 1000.0, 5);
    Bike bike("MH12CD8970", 600.0, 150);

    // Car Details
    std::cout << "Car Details\n";
    car.display();

    std::cout << "Rent for 6 days: "
              << car.calculateRent(3) << "\n\n";

    // Bike Details
    std::cout << "Bike Details\n";
    bike.display();

    std::cout << "Rent for 2 days: "
              << bike.calculateRent(3) << '\n';

    return 0;   // End Program
}