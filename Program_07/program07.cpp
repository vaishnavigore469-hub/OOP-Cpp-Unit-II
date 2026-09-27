#include <iostream>   // Input Output

// Academic Class
class Academic
{
public:
    // Display Function
    void display() const
    {
        std::cout << "Academic information\n";
    }
};

// Sports Class
class Sports
{
public:
    // Display Function
    void display() const
    {
        std::cout << "Sports information\n";
    }
};

// Multiple Inheritance
class Student : public Academic, public Sports
{
public:
    // Display All
    void displayAll() const
    {
        Academic::display();   // Academic Display
        Sports::display();     // Sports Display
    }
};

// Main Function
int main()
{
    // Create Object
    Student student;

    // Scope Resolution
    student.Academic::display();
    student.Sports::display();

    // Display All
    student.displayAll();

    return 0;   // End Program
}