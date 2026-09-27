#include <iostream>   // Input Output
#include <string>     // String
#include <utility>    // Move

// Base Class
class Person
{
protected:
    std::string name;   // Name

public:
    // Constructor
    explicit Person(std::string personName)
        : name(std::move(personName)) {}

    // Display Person
    void showPerson() const
    {
        std::cout << "Name: " << name << '\n';
    }
};

// Intermediate Class
class Employee : public Person
{
protected:
    int employeeId;   // Employee ID

public:
    // Constructor
    Employee(std::string employeeName, int id)
        : Person(std::move(employeeName)), employeeId(id) {}

    // Display Employee
    void showEmployee() const
    {
        std::cout << "Employee ID: " << employeeId << '\n';
    }
};

// Derived Class
class Manager : public Employee
{
private:
    int teamSize;   // Team Size

public:
    // Constructor
    Manager(std::string managerName, int id, int size)
        : Employee(std::move(managerName), id), teamSize(size) {}

    // Display Manager
    void showManager() const
    {
        showPerson();      // Show Person
        showEmployee();    // Show Employee
        std::cout << "Team Size: " << teamSize << '\n';
    }
};

// Main Function
int main()
{
    // Create Object
    Manager manager("Vaishanvi", 502, 10);

    // Display Details
    manager.showManager();

    return 0;   // End Program
}