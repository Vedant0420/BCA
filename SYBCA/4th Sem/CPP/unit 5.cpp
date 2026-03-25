// Unit 5  - Class and Objects 

//Class - Class is userdefined data type which consists of data members and member functions. A class can have private, public, and protected members
//Object - Objects are basic building block which are instance of an class identifed by a unique name.
//Fruits is a class and mango, apple, orange are objects of that class.

//creating object and class and defining them outside the class aswell as inline function

// class student {
//     public:
//     int rno, age;
//     void display();
// }s;

// int main ()
// {
//     s.rno=10; 
//     s.age=21;
//     s.display();
    
// }

//    inline void student :: display(){
        
//     cout << "The PRN and Age of student is " << rno << " " << age << endl;
// }


//Array within class

    // #include <iostream>
    // #include <cstring>
    // using namespace std;

    // class student {
    //     public:
    //     char name[30];
    //     int rno, age;
    //     void display();
    // }s;

    // int main ()
    // {
    //     s.rno=10; 
    //     s.age=21;
    //     strcpy (s.name,"vedant");
    //     s.display();
    // }

    //     void student :: display(){
            
    //     cout << "The PRN is " << rno << " and Age of student is " << age << " and his name is " << name << endl;
    //     }

    // Array of objects
#include <iostream>
#include <string>
using namespace std;


class student {
public:
    int rno, age;
    static string name;
    void display();
 
} ;
string student :: name="Vedant";
int main ()
{    
    cout << student::name;

    return 0;
}

void student :: display(){
    cout << "The PRN is " << rno 
         << " and Age of student is " << age << endl;
}


// Dynamic memory allocation for objects

// New and delete operator
//New is to allocate memory and delete is to deallocate memory
//