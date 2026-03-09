// Assignment-7 P7.3: Department Class
// Create a class Department with data members: dno, dname, number of employees.
// Define member functions to accept and display department details.
// Create pointer object to call the functions.

#include <iostream>
#include <string>
using namespace std;

class Department
{
    private:
        int dno;           // Department Number
        string dname;      // Department Name
        int numEmployees;  // Number of Employees

    public:
        // Accept department details
        void accept()
        {
            cout << "Enter Department Number: ";
            cin >> dno;
            cin.ignore();
            cout << "Enter Department Name: ";
            getline(cin, dname);
            cout << "Enter Number of Employees: ";
            cin >> numEmployees;
        }

        // Display department details
        void display()
        {
            cout << "\n===== DEPARTMENT DETAILS =====" << endl;
            cout << "Department No      : " << dno << endl;
            cout << "Department Name    : " << dname << endl;
            cout << "Number of Employees: " << numEmployees << endl;
            cout << "==============================" << endl;
        }
};

int main()
{
    // Create pointer object
    Department *deptPtr = new Department();

    cout << "========== DEPARTMENT INFORMATION ==========" << endl;
    
    // Using pointer to call accept function
    deptPtr->accept();

    // Using pointer to call display function
    deptPtr->display();

    // Deallocate memory
    delete deptPtr;

    return 0;
}
