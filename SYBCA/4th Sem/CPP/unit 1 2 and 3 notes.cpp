#include <iostream>
using namespace std;

// Token : A token is a basic unit of a programming language. It can be a keyword, identifier, literal, operator, or punctuation symbol. Tokens are the building blocks of a program and are used to create statements and expressions.

// Keywords are reserved words which have fixed meaning, and its meaning cannot be changed by the programmer. For example, int, float, if, else, while, for, return, etc. are keywords in C++.

// Identifiers are names given to variables, functions, classes, etc. They must follow certain rules, such as starting with a letter or underscore and can be followed by letters, digits, or underscores. For example, myVariable, calculateSum, _temp, etc. are identifiers.

// constants are fixed values that cannot be changed during the execution of a program. They can be of various types, such as integer constants (e.g., 10, -5), floating-point constants (e.g., 3.14, -0.001), character constants (e.g., 'A', 'z'), and string literals (e.g., "Hello, World!"). Constants are used to represent values that should not be modified in the program.

// Data types are used to define the type of data that a variable can hold. C++ has several data types, including:
// User defined data types: In addition to built-in data types, C++ allows programmers to create their own data types using structures (struct), classes, and enumerations (enum). These user-defined data types can encapsulate multiple related variables and functions, allowing for more complex data structures and object-oriented programming. For example, a struct can be used to define a custom data type for a point in 2D space:
// Built in data types: C++ has several built-in data types, including integers (int), floating-point numbers (float, double), characters (char), and boolean values (bool). These data types are used to declare variables and specify the type of data they can hold. For example, int age = 25; declares an integer variable named age and initializes it with the value 25.
// Derived data types: Derived data types are created from existing data types. They include arrays, pointers, references, and functions. Arrays are used to store multiple values of the same type, while pointers and references allow for indirect access to variables. Functions are blocks of code that perform specific tasks and can return values. For example, an array of integers can be declared as int numbers[5]; which can hold five integer values.

// Variables are named storage locations in memory that can hold different values during the execution of a program. They are declared with a specific data type and can be assigned values. For example, int age = 25; declares an integer variable named age and initializes it with the value 25. Variables can be used to store user input, perform calculations, and manipulate data throughout the program.

// int age = 25; age is a variable of type int that holds the value 25

// Operators are symbols that perform specific operations on operands. C++ has various types of operators, including arithmetic operators (+, -, *, /, %), relational operators (==, !=, <, >, <=, >=), logical operators (&&, ||, !), assignment operators (=, +=, -=, *=, /=), and more. Operators are used to perform calculations, compare values, and manipulate data in a program. For example, the expression int sum = a + b; uses the addition operator (+) to calculate the sum of two variables a and b and assigns the result to the variable sum.

//Arithmetic Operators: These operators are used to perform mathematical operations on operands. They include addition (+), subtraction (-), multiplication (*), division (/), and modulus (%). For example, the expression int result = a * b; uses the multiplication operator (*) to calculate the product of two variables a and b and assigns the result to the variable result.

// int main () 
// {
//  cout << "Enter any Two Numbers: ";
//  int a , b;
//  cin >> a>> b;
//  int sum = a + b;
//  cout << "The addition of the two numbers is : "<< sum << endl;
//  return 0;
// }

//


// Relational Operators: These operators are used to compare two values and return a boolean result (true or false). They include equality (==), inequality (!=), less than (<), greater than (>), less than or equal to (<=), and greater than or equal to (>=). For example, the expression bool isEqual = (a == b); uses the equality operator (==) to compare the values of variables a and b and assigns the result to the boolean variable isEqual.

// int main ()
// {
// int a = 1, b = 1;

// cout << (a < b) << endl;   // 1 (true)
// cout << (a > b) << endl;   // 0 (false)
// cout << (a == b) << endl;  // 0
// cout << (a != b) << endl;  // 1
// }

//Logical Operators: These operators are used to combine multiple boolean expressions and return a boolean result. They include logical AND (&&), logical OR (||), and logical NOT (!). For example, the expression bool isValid = (age > 18) && (age < 65); uses the logical AND operator (&&) to check if the age variable is greater than 18 and less than 65, and assigns the result to the boolean variable isValid.

// int main ()
// {
// int a = 5, b = 10;

// cout << (a < 10 && b > 5) << endl;  // 1 (true AND true)
// cout << (a > 10 || b > 5) << endl;  // 1 (false OR true)
// cout << !(a < b) << endl;           // 0 (NOT true)
// }

// Assignment Operators: These operators are used to assign values to variables. They include the simple assignment operator (=) and compound assignment operators (+=, -=, *=, /=). For example, the expression a += 5; uses the compound assignment operator (+=) to add 5 to the current value of variable a and assigns the result back to a.

// int main ()
// {
//     int a = 10;

// a += 5;   // a = 15
// a -= 3;   // a = 12
// a *= 2;   // a = 24
// a /= 4;   // a = 6
// a %= 5;   // a = 1

// cout << a;
// }

// increment and decrement operators: These operators are used to increase or decrease the value of a variable by 1. The increment operator (++) adds 1 to the variable, while the decrement operator (--) subtracts 1 from the variable. For example, the expression a++; uses the post-increment operator to increase the value of variable a by 1 after its current value is used in an expression.
// int main ()
// {
//     int a = 5;

//     cout << a++ << endl;  // Output: 5 (post-increment, returns the value before incrementing)
//     cout << a << endl;    // Output: 6 (value after incrementing)

//     cout << ++a << endl;  // Output: 7 (pre-increment, increments the value before returning it)
//     cout << a << endl;    // Output: 7 (value after incrementing)

//     cout << a-- << endl;  // Output: 7 (post-decrement, returns the value before decrementing)
//     cout << a << endl;    // Output: 6 (value after decrementing)

//     cout << --a << endl;  // Output: 5 (pre-decrement, decrements the value before returning it)
//     cout << a << endl;    // Output: 5 (value after decrementing)
// }

// conditional operator: The conditional operator (?:) is a ternary operator that takes three operands. It is used to evaluate a condition and return one of two values based on the result. The syntax is: condition ? value_if_true : value_if_false. For example, the expression int max = (a > b) ? a : b; uses the conditional operator to compare the values of variables a and b, and assigns the greater value to the variable max.
// int main ()
// {
//     int a = 10, b = 20;

//     int max = (a > b) ? a : b;  // max will be assigned the value of b (20) since a is not greater than b

//     cout << "The maximum value is: " << max << endl;  // Output: The maximum value is: 20
// }

// Control structre of CPP 

//If, If-else , Nested 

// #include <iostream>
// using namespace std;

// int main ()
// {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if(age < 0 || age >= 100)
//     {
//         cout << "Invalid age!";
//     }
//     else if (age >= 18)
//     {
//         cout << "Welcome to the site!";
//     }
//     else
//     {
//         cout << "Sorry, you are not old enough to access the site.";
//     }
// }


// Switch case 

// int main ()
// {
//     int month;
//     std::cout << "Enter Month between (1-12) :- ";
//     std::cin >> month;

//     switch (month)
//     {
//         case 1 :
//         std::cout << "January";
//         break;
//         case 2 :
//         std::cout << "February";
//         break;
//         case 3 :
//         std::cout << "March";
//         break;
//         case 4 :
//         std::cout << "April";
//         break;
//         case 5 :
//         std::cout << "May";
//         break;
//         case 6 :
//         std::cout << "June";
//         break;
//         case 7 :
//         std::cout << "July";
//         break;
//         case 8 :
//         std::cout << "August";
//         break;
//         case 9 :
//         std::cout << "September";
//         break;
//         case 10 :
//         std::cout << "October";
//         break;
//         case 11:
//         std::cout << "November";
//         break;
//         case 12 :
//         std::cout << "December";
//         break;
//         default :
//         std::cout << "Invalid month!";

//     }
// }

// while loop

// Syntax:
// initialization;
// while(condition)
// {
// statements;
// update statement;
// }

// Example :-

// int main ()
// {
//  int i = 1;
//  while(i<=5)
//  {
//     cout<<i<<endl;
//     i++;

//  }
//  return 0;
// }


// do while loop

// Syntax:
// initialization;
// do
// {
// statements;
// update statement;
// } while(condition);

//Example

// int main ()
// {
//     int number;

//     do{
//         cout << "Enter a +ve Number:";
//         cin >> number;
//     }
//     while(number <=0);
//     cout << "You entered: " << number;


// }

//For loop

// Syntax: 
// for(initialization ; condition ; update statement)
//  {
// statements;
//  }

// Example

// int main ()
// {
//     for (int i=1; i<=10; i+=2){
//         cout<< i << endl;
//     }
//     cout<<"Hello World!"<<endl;
// }

//break and continue statement

// break = break out of a loop
//continue = skip current iteration and move the to next iteration

// int main ()
// {
//     for (int i=1; i<=10; i++){
//         if(i==9)
//         {
//             continue;
//         }
//         cout << i << endl;
//     }
// }


// Nested loops

// int main ()
// {
//     int rows, cols;
//     char symbol;

//     cout << "How many rows? ";
//     cin >> rows;
//     cout << "How many cols? ";
//     cin >> cols;
//     cout << "Which symbol to use? ";
//     cin >> symbol;

//     for (int i = 1 ; i <= rows; i++)
//     {
//         for (int j = 1; j <= cols; j++)
//         {
//             cout << symbol;
//         }
//         cout << endl;
//     }

//     return 0;
// }
