#include <iostream>   // Input Output
#include <string>     // String
#include <utility>    // Move

// Outer Class
class University
{
public:
    // Nested Class
    class Department
    {
    private:
        std::string name;   // Department Name

    public:
        // Constructor
        explicit Department(std::string departmentName)
            : name(std::move(departmentName)) {}

        // Display Department
        void display() const
        {
            std::cout << "Department: "
                      << name << '\n';
        }
    };
};

// Main Function
int main()
{
    // Create Object
    University::Department department(
        "Artificial Intelligence and Data Science"
    );

    // Display Details
    department.display();

    return 0;   // End Program
}