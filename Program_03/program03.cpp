#include <iostream>   // Input Output

// Base Class
class Base
{
public:
    // Display Function
    void show() const
    {
        std::cout << "Base public function\n";
    }
};

// Public Inheritance
class PublicDerived : public Base
{
};

// Private Inheritance
class PrivateDerived : private Base
{
public:
    // Call Base
    void callBaseShow() const
    {
        show();   // Access Base
    }
};

// Main Function
int main()
{
    // Public Object
    PublicDerived publicObject;

    // Call Function
    publicObject.show();

    // Private Object
    PrivateDerived privateObject;

    // Call Function
    privateObject.callBaseShow();

    // Direct Access
    // privateObject.show(); // Error

    return 0;   // End Program
}