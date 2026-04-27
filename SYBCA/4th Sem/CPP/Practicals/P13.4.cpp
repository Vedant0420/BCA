// Assignment-13 P13.4
// Abstract Employee class with pure virtual calculateSalary()

#include <iostream>
#include <string>
using namespace std;

class Employee
{
protected:
    string name;
    int id;

public:
    virtual void acceptDetails()
    {
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> id;
    }

    virtual double calculateSalary() const = 0;

    void displayBasicDetails() const
    {
        cout << "Name : " << name << endl;
        cout << "ID   : " << id << endl;
    }

    virtual ~Employee() {}
};

class FullTimeEmployee : public Employee
{
private:
    double monthlySalary;

public:
    void acceptDetails() override
    {
        Employee::acceptDetails();
        cout << "Enter Monthly Salary: ";
        cin >> monthlySalary;
    }

    double calculateSalary() const override
    {
        return monthlySalary;
    }
};

class PartTimeEmployee : public Employee
{
private:
    double hoursWorked;
    double ratePerHour;

public:
    void acceptDetails() override
    {
        Employee::acceptDetails();
        cout << "Enter Hours Worked: ";
        cin >> hoursWorked;
        cout << "Enter Rate per Hour: ";
        cin >> ratePerHour;
    }

    double calculateSalary() const override
    {
        return hoursWorked * ratePerHour;
    }
};

int main()
{
    int choice;
    Employee *emp = 0;

    cout << "\n1. Full Time Employee\n2. Part Time Employee\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
        emp = new FullTimeEmployee();
    else if (choice == 2)
        emp = new PartTimeEmployee();
    else
    {
        cout << "Invalid choice." << endl;
        return 0;
    }

    emp->acceptDetails();

    cout << "\n===== EMPLOYEE DETAILS =====\n";
    emp->displayBasicDetails();
    cout << "Salary : " << emp->calculateSalary() << endl;

    delete emp;
    return 0;
}
