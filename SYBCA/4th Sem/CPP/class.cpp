#include <iostream>
using namespace std;

// allow user to input data for all students in array
// calculate and display the avg marks for each student
// display student with highest marks

class student {
    public:
    int prn,age,marks;
    void display();
} s[3];

int main ()
{
 int maxmarks = 0;
 int total = 0;
 int topindex = 0;

    for (int i = 0; i<3; i++)
{
    cout << "Enter students prn,age and marks:";
    cin >> s[i].prn >> s[i].age >> s[i].marks;

    total += s[i].marks;
    if (s[i].marks > maxmarks)
    {
        maxmarks = s[i].marks;
        topindex = i;
    }


}

{
    // Avg 
    float avg = total / 3.0;
    cout << "Average marks of student: " << avg << endl;
    // Highest marks 
    cout << "Student with highest marks: " << endl;
    s[topindex].display();
}


}

void student :: display(){
    cout <<" The PRN of student is " <<prn << " his age is " <<age <<" Marks scored by the student " << marks<<endl;
}