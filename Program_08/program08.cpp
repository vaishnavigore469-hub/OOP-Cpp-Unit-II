#include <iostream>   // Input Output

// Base Class
class Base
{
public:
    // Constructor
    Base()
    {
        std::cout << "Base constructor\n";
    }

    // Destructor
    ~Base()
    {
        std::cout << "Base destructor\n";
    }
};

// Derived Class
class Derived : public Base
{
public:
    // Constructor
    Derived()
    {
        std::cout << "Derived constructor\n";
    }

    // Destructor
    ~Derived()
    {
        std::cout << "Derived destructor\n";
    }
};

// Main Function
int main()
{
    // Create Object
    Derived object;

    return 0;   // End Program
}