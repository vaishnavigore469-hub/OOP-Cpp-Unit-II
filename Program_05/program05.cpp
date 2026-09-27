#include <iostream>   // Input Output
#include <string>     // String
#include <utility>    // Move

// Base Class
class Vehicle
{
protected:
    std::string registrationNumber;   // Registration Number

public:
    // Constructor
    explicit Vehicle(std::string registration)
        : registrationNumber(std::move(registration)) {}

    // Start Vehicle
    void start() const
    {
        std::cout << "Vehicle " << registrationNumber
                  << " started\n";
    }
};

// Car Class
class Car : public Vehicle
{
public:
    // Constructor
    explicit Car(std::string registration)
        : Vehicle(std::move(registration)) {}

    // Open Boot
    void openBoot() const
    {
        std::cout << "Car boot opened\n";
    }
};

// Bike Class
class Bike : public Vehicle
{
public:
    // Constructor
    explicit Bike(std::string registration)
        : Vehicle(std::move(registration)) {}

    // Helmet Reminder
    void helmetReminder() const
    {
        std::cout << "Please wear a helmet\n";
    }
};

// Main Function
int main()
{
    // Create Objects
    Car car("MH16AB6050");
    Bike bike("MH12CA5060");

    // Car Details
    car.start();
    car.openBoot();

    // Bike Details
    bike.start();
    bike.helmetReminder();

    return 0;   // End Program
}