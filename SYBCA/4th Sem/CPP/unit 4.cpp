// #include <iostream>
// #include <string>
// using namespace std;

//Basic functions example

// // Global variables
// string name = "Vedant";
// int age = 20;

// // Function
// void happybirthday(string name, int age){
//     cout << "Happy Birthday to "  << name << endl;
//     cout << "Happy Birthday to " << name << endl;
//     cout << "Happy Birthday to " << name << endl;
//     cout << "Happy Birthday to " << name << endl;
//     cout << "You're now " << age << " years old" << endl;
// }

// int main (){
//     happybirthday(name, age); // function call
// }

// Return Keyword

// double sqaure (double length);

// int main () 
// {
//     double length = 5.0;
//     double area = sqaure(length);
//     cout << " Area:"<< area << "cm^2" << endl;
//     return 0;
// }
// double sqaure (double length)
// {
//     return length * length;
// }

// double cube (double length);
// int main () 
// {
//     double length = 5.0;
//     double volume = cube(length);
//     cout << " Volume:"<< volume << "cm^3" << endl;
//     return 0;
// }
// double cube (double length)
// {
//     return length * length * length;;
// }

// Function overloading with menu drivn program to calculate area of cirlce rectangle and square


// #include <iostream>
// #include <math.h>
// using namespace std;


// // Area of circle

// int area (float r)
// {
//     return 3.14*r*r;
// }

// //Area of rectangle

// int area (int l,int b)
// {
//     return l*b;
// }

// //Area of sqaure

// int area (int s)
// {
//     return s*s;
// }

// int main ()
// {
//     int choice;
//     cout <<"Select Shape to calculate its area:" << endl;
//     cout<< "1.Circle " <<endl;
//     cout<< "2.Rectangle" <<endl;
//     cout<< "3.Square" << endl;
//     cin >> choice;
    
//     switch (choice){
//         case 1:
//         {
//             float radius;
//             cout << "Enter Radius of circle: " << endl;
//             cin >> radius;
//             cout << "The Area of circle : " << area(radius) << endl;
//             break;
//         }
//         case 2:
//         int length, breadth;
//         cout << "Enter Length and Breadth of rectangle: " << endl;
//         cin >> length >> breadth;
//         cout <<"The Area of Rectangle : " << area(length,breadth) << endl;
//         break;
//         case 3:
//         int side;
//         cout << "Enter Side of Sqaure: " << endl;
//         cin >> side;
//         cout << "The Area of Sqaure : " << area(side) << endl;
//         break;
//         default :
//         cout << "Eneter a valid choice between 1-3";
//     }
//     return 0;
// }


// Recursive function

// #include <iostream>
// using namespace std;

// void walk (int steps);
// int main ()
// {
//     walk(10);
//     return 0;
// }
// void walk (int steps){
//     if (steps > 0){
//         cout << "You take a step "<< endl;
//         walk(steps - 1);
//     }
// }

// Factorial of a number using recursion
// int factorial (int n);
// int main()
// {
//     cout << factorial(10) << endl;
//     return 0;
// }

// int factorial(int n){
//     if(n>1){
//         return n*factorial(n-1);
//     }
//     else {
//         return 1;
//     }
// }

// Inline function : Is a function that reduces the function call overhead by replacing function call with the code in the definition

// Syntax : - inline data_type function_name (parameters){}

// #include <iostream>
// using namespace std;

// inline int add (int a, int b)
// {
//     return a+b;
// }

// int main() {

//     int result = add(10,5);
//         cout << "The sum is :- " << result;
//     return 0;
// }

// Dynamic memory allocation using new and delete

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10);  // Allocate memory for an integer and initialize it to 10
    cout << *ptr << endl;    // Print the value pointed to by ptr
    delete ptr;              // Deallocate the memory
    return 0;
}

