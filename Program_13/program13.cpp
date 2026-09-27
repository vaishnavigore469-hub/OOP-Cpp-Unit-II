#include <iostream>   // Input Output

// Account Class
class Account
{
private:
    double balance;   // Balance

    // Friend Class
    friend class Auditor;

public:
    // Constructor
    explicit Account(double initialBalance)
        : balance(initialBalance) {}
};

// Auditor Class
class Auditor
{
public:
    // Inspect Account
    void inspect(const Account& account) const
    {
        std::cout << "Account Balance: "
                  << account.balance << '\n';
    }
};

// Main Function
int main()
{
    // Create Account
    Account account(8000.0);

    // Create Auditor
    Auditor auditor;

    // Inspect Account
    auditor.inspect(account);

    return 0;   // End Program
}