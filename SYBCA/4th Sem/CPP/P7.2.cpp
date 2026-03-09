// Assignment-7 P7.2: Student Class
// Create a class Student with data members: Roll number, Name, Course and Percentage.
// Define member functions to accept and display student details of 'n' students.
// Write a function to display details of topper student.

#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        int rollNumber;
        string name;
        string course;
        float percentage;

    public:
        // Accept student details
        void accept()
        {
            cout << "Enter Roll Number: ";
            cin >> rollNumber;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Course: ";
            getline(cin, course);
            cout << "Enter Percentage: ";
            cin >> percentage;
        }

        // Display student details
        void display()
        {
            cout << "\nRoll No: " << rollNumber << " | Name: " << name 
                 << " | Course: " << course << " | Percentage: " << percentage << "%" << endl;
        }

        // Getter for percentage (to find topper)
        float getPercentage()
        {
            return percentage;
        }

        // Getter for roll number
        int getRollNumber()
        {
            return rollNumber;
        }

        // Display single student details (detailed)
        void displayDetailed()
        {
            cout << "\n======== STUDENT DETAILS ========" << endl;
            cout << "Roll Number : " << rollNumber << endl;
            cout << "Name        : " << name << endl;
            cout << "Course      : " << course << endl;
            cout << "Percentage  : " << percentage << "%" << endl;
            cout << "=================================" << endl;
        }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student students[n];
    
    // Accept details of n students
    for (int i = 0; i < n; i++)
    {
        cout << "\n--- Student " << (i + 1) << " ---" << endl;
        students[i].accept();
    }

    // Display all students
    cout << "\n========== ALL STUDENTS ==========" << endl;
    for (int i = 0; i < n; i++)
    {
        students[i].display();
    }

    // Find and display topper
    float maxPercentage = students[0].getPercentage();
    int topperIndex = 0;

    for (int i = 1; i < n; i++)
    {
        if (students[i].getPercentage() > maxPercentage)
        {
            maxPercentage = students[i].getPercentage();
            topperIndex = i;
        }
    }

    cout << "\n========== TOPPER STUDENT ==========" << endl;
    students[topperIndex].displayDetailed();

    return 0;
}
