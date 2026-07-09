#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    int marks[2];

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: ";
        for(int i=0; i<2; i++){
            cout << marks[i] << " ";
        }
        cout << endl;
    }
    void welcome();
};

void Student :: welcome(){
    cout << "Welcome to the class!" << endl;
}

int main(){
    Student s[3];
    cout <<"Enter details of 3 students:" << endl;

    for(int i=0; i<3; i++){
        cout <<"Enter Details of Student "<<i+1<<":"<<endl;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Age: ";
        cin >> s[i].age;
        cout << "Marks: ";
        for(int j=0; j<2; j++){
            cin >> s[i].marks[j];
        }
    }

    for(int i=0; i<3; i++){
        s[i].display();
        s[i].welcome();
    }
    return 0;
}