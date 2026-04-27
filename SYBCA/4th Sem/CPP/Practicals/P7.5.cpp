// Assignment-7 P7.5: Static Properties and Static Data Members
// Write a program to show the use of static properties and static data members.

#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        int empID;
        string empName;
        static int totalEmployees;  // Static data member - shared by all objects
        static float totalSalary;   // Static data member

    public:
        // Constructor
        Employee(int id, string name, float salary)
        {
            empID = id;
            empName = name;
            totalEmployees++;      // Increment static counter
            totalSalary += salary;
        }

        // Accept employee details
        void accept()
        {
            cout << "Enter Employee ID: ";
            cin >> empID;
            cin.ignore();
            cout << "Enter Employee Name: ";
            getline(cin, empName);
        }

        // Display employee details
        void display()
        {
            cout << "\nEmployee ID: " << empID << " | Name: " << empName << endl;
        }

        // Static function to display total employees (can only access static members)
        static void displayTotalEmployees()
        {
            cout << "\n======== STATIC INFORMATION =========" << endl;
            cout << "Total Employees: " << totalEmployees << endl;
            cout << "Total Salary   : " << totalSalary << endl;
            cout << "Average Salary : " << (totalEmployees > 0 ? totalSalary / totalEmployees : 0) << endl;
            cout << "======================================" << endl;
        }

        // Destructor
        ~Employee()
        {
            totalEmployees--;
        }
};

// Initialize static data members (must be done outside the class)
int Employee::totalEmployees = 0;
float Employee::totalSalary = 0;

int main()
{
    cout << "========== STATIC DATA MEMBERS DEMO ==========" << endl;

    // Create employee objects
    Employee emp1(1, "Vedant Kumar", 50000);
    Employee emp2(2, "Arun Sharma", 55000);
    Employee emp3(3, "Priya Singh", 60000);

    cout << "\n========== EMPLOYEE DETAILS ==========" << endl;
    emp1.display();
    emp2.display();
    emp3.display();

    // Display static information using static function
    // Can be called using class name or object name
    Employee::displayTotalEmployees();

    // Also can be called using object
    emp1.displayTotalEmployees();

    cout << "\n========== CREATING MORE EMPLOYEES ==========" << endl;
    Employee emp4(4, "Neha Gupta", 65000);

    // Static information is updated
    Employee::displayTotalEmployees();

    return 0;
}
