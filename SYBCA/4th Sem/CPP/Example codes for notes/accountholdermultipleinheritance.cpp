// derive two classes as withdraw and deposit from account class with withdrawl and deposit amount are the data members  and display updated values
#include <iostream>
using namespace std;

class account {
    char aname[20], ano[20];

protected:
    int balance;

public:
    void accept() {
        cout << "Enter account holder name: ";
        _flushall();
        gets(aname);
        cout << "Enter account number: ";
        _flushall();
        gets(ano);
        cout << "Enter balance: ";
        _flushall();
        cin >> balance;
    }

    void display() {
        cout << "Account holder name: " << aname << endl;
        cout << "Account number: " << ano << endl;
        cout << "Balance: " << balance << endl;
    }
};

class withdraw : public account {
    int amount;

public:
    void accept() {
        account::accept();
        cout << "Enter amount to withdraw: ";
        _flushall();
        cin >> amount;
    }

    void display() {
        account::display();
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
            cout << "Updated balance: " << balance << endl;
        }
    }
};

class deposit : public account {
    int amount;

public:
    void accept() {
        account::accept();
        cout << "Enter amount to deposit: ";
        _flushall();
        cin >> amount;
    }

    void display() {
        account::display();
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
        cout << "Updated balance: " << balance << endl;
    }
};
int main() {
    int choice;
    cout << "1. Withdraw" << endl;
    cout << "2. Deposit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        withdraw w;
        w.accept();
        w.display();
    } else if (choice == 2) {
        deposit d;
        d.accept();
        d.display();
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}