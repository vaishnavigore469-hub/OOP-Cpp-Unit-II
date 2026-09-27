#include <iostream>   // Input Output

// Academic Class
class Academic
{
protected:
    int academicMarks;   // Academic Marks

public:
    // Constructor
    explicit Academic(int marks)
        : academicMarks(marks) {}

    // Show Marks
    void showAcademic() const
    {
        std::cout << "Academic Marks: "
                  << academicMarks << '\n';
    }
};

// Sports Class
class Sports
{
protected:
    int sportsMarks;   // Sports Marks

public:
    // Constructor
    explicit Sports(int marks)
        : sportsMarks(marks) {}

    // Show Marks
    void showSports() const
    {
        std::cout << "Sports Marks: "
                  << sportsMarks << '\n';
    }
};

// Multiple Inheritance
class Student : public Academic, public Sports
{
public:
    // Constructor
    Student(int academic, int sports)
        : Academic(academic), Sports(sports) {}

    // Show Total
    void showTotal() const
    {
        std::cout << "Total Marks: "
                  << academicMarks + sportsMarks << '\n';
    }
};

// Main Function
int main()
{
    // Create Object
    Student student(80, 15);

    // Display Marks
    student.showAcademic();
    student.showSports();
    student.showTotal();

    return 0;   // End Program
}