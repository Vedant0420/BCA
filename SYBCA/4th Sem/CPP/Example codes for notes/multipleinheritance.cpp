// create class as teaching with data member as teacher name and course create another class as non teaching with department and experince as the data members dervie calss student from both class with data members as program name and year
#include <iostream>
using namespace std;
class teaching {
    char tname[20], course[20];
    public:
    void accept() {
        cout << "Enter teacher name: ";
        _flushall();
        gets(tname);
        cout << "Enter course name: ";
        _flushall();
        gets(course);
    }
    void display() {
        cout << "Teacher name: " << tname << endl;
        cout << "Course name: " << course << endl;
    }
};

class nonteaching {
    char dname[20];
    int exp;
    public:
    void accept() {
        cout << "Enter department name: ";
        _flushall();
        gets(dname);
        cout << "Enter experience: ";
        cin >> exp;
    }
    void display() {
        cout << "Department: " << dname << endl;
        cout << "Experience: " << exp << " years" << endl;
    }

    class student : public teaching, public nonteaching {
        char pname[20];
        int year;
        public:
        void accept() {
            teaching::accept();
            nonteaching::accept();
            cout << "Enter program name: ";
            _flushall();
            gets(pname);
            cout << "Enter year: ";
            cin >> year;
        }
        void display() {
            teaching::display();
            nonteaching::display();
            cout << "Program name: " << pname << endl;
            cout << "Year: " << year << endl;
        }
    };
};