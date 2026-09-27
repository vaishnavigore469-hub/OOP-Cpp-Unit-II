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

    // Display Name
    void displayName() const
    {
        std::cout << "Name: " << name << '\n';
    }
};

// Student Class
class Student : virtual public Person
{
public:
    // Constructor
    Student() : Person("Unknown") {}
};

// Employee Class
class Employee : virtual public Person
{
public:
    // Constructor
    Employee() : Person("Unknown") {}
};

// Teaching Assistant
class TeachingAssistant : public Student, public Employee
{
public:
    // Constructor
    explicit TeachingAssistant(std::string assistantName)
        : Person(std::move(assistantName)), Student(), Employee() {}
};

// Main Function
int main()
{
    // Create Object
    TeachingAssistant assistant("Vaishnavi");

    // Display Name
    assistant.displayName();

    return 0;   // End Program
}