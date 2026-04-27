// Assignment-13 P13.5
// Abstract BankAccount class with SavingsAccount and CurrentAccount

#include <iostream>
using namespace std;

class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;

    void displayBalance() const
    {
        cout << "Current Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount
{
private:
    double minBalance;

public:
    SavingsAccount(double initialBalance, double minimum)
        : BankAccount(initialBalance), minBalance(minimum) {}

    void deposit(double amount) override
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) override
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
            return;
        }

        if (balance - amount >= minBalance)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Cannot withdraw. Minimum balance must be maintained." << endl;
        }
    }
};

class CurrentAccount : public BankAccount
{
private:
    double overdraftLimit;

public:
    CurrentAccount(double initialBalance, double overdraft)
        : BankAccount(initialBalance), overdraftLimit(overdraft) {}

    void deposit(double amount) override
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) override
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
            return;
        }

        if (balance + overdraftLimit >= amount)
        {
            balance -= amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Overdraft limit exceeded." << endl;
        }
    }
};

int main()
{
    int accountType, choice;
    double initialBalance, amount;
    BankAccount *acc = 0;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    cout << "\n1. Savings Account\n2. Current Account\n";
    cout << "Choose Account Type: ";
    cin >> accountType;

    if (accountType == 1)
    {
        double minBalance;
        cout << "Enter Minimum Balance: ";
        cin >> minBalance;
        acc = new SavingsAccount(initialBalance, minBalance);
    }
    else if (accountType == 2)
    {
        double overdraft;
        cout << "Enter Overdraft Limit: ";
        cin >> overdraft;
        acc = new CurrentAccount(initialBalance, overdraft);
    }
    else
    {
        cout << "Invalid account type." << endl;
        return 0;
    }

    do
    {
        cout << "\n1. Deposit\n2. Withdraw\n3. Display Balance\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc->deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc->withdraw(amount);
            break;
        case 3:
            acc->displayBalance();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    delete acc;
    return 0;
}
