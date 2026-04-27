// Assignment-13 P13.1
// Person -> Employee, Student -> Intern (multiple inheritance with virtual base class)

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void acceptPerson()
    {
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
    }

    void displayPerson() const
    {
        cout << "Name        : " << name << endl;
        cout << "Age         : " << age << endl;
    }
};

class Employee : virtual public Person
{
protected:
    string department;
    double salary;

public:
    void acceptEmployee()
    {
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayEmployee() const
    {
        cout << "Department  : " << department << endl;
        cout << "Salary      : " << salary << endl;
    }
};

class Student : virtual public Person
{
protected:
    string courseName;
    double percentage;

public:
    void acceptStudent()
    {
        cin.ignore();
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        cout << "Enter Percentage: ";
        cin >> percentage;
    }

    void displayStudent() const
    {
        cout << "Course Name : " << courseName << endl;
        cout << "Percentage  : " << percentage << endl;
    }
};

class Intern : public Employee, public Student
{
private:
    string designation;

public:
    void acceptIntern()
    {
        cout << "\n===== ENTER INTERN DETAILS =====\n";
        acceptPerson();
        acceptEmployee();
        acceptStudent();
        cin.ignore();
        cout << "Enter Designation: ";
        getline(cin, designation);
    }

    void displayIntern() const
    {
        cout << "\n===== INTERN DETAILS =====\n";
        displayPerson();
        displayEmployee();
        displayStudent();
        cout << "Designation : " << designation << endl;
    }
};

int main()
{
    Intern in;
    in.acceptIntern();
    in.displayIntern();
    return 0;
}
