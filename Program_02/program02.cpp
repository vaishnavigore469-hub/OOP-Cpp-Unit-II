#include <iostream>   // Input Output
#include <string>     // String
#include <utility>    // Move

// Base Class
class Employee
{
protected:
    std::string name;   // Employee Name

public:
    // Constructor
    explicit Employee(std::string employeeName)
        : name(std::move(employeeName)) {}
};

// Derived Class
class Developer : public Employee
{
private:
    std::string language;   // Programming Language

public:
    // Constructor
    Developer(std::string employeeName, std::string programmingLanguage)
        : Employee(std::move(employeeName)),
          language(std::move(programmingLanguage)) {}

    // Display Details
    void display() const
    {
        std::cout << "Developer: " << name << '\n';
        std::cout << "Language: " << language << '\n';
    }
};

// Main Function
int main()
{
    // Create Object
    Developer developer("Vaishnavi", "C++");

    // Display Details
    developer.display();

    return 0;   // End Program
}