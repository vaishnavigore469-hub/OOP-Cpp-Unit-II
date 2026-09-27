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

// Derived Class
class Student : public Person
{
private:
    int rollNumber;   // Roll Number

public:
    // Constructor
    Student(std::string studentName, int roll)
        : Person(std::move(studentName)), rollNumber(roll) {}

    // Display Student
    void displayStudent() const
    {
        displayName();   // Call Base
        std::cout << "Roll Number: " << rollNumber << '\n';
    }
};

// Main Function
int main()
{
    // Create Object
    Student student("Vaishnavi", 2565);

    // Display Details
    student.displayStudent();

    return 0;   // End Program
}