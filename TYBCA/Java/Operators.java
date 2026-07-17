// import java.io.*;
// class Arithmetic 
// {
//     public static void main(String[] args)
//     {
//         // Arithemtic operators on integers
//         int a = 10, b = 5;

//         //Arithmetic operators on strings
//         String n1= "15";
//         String n2= "25";

//         //Converting string to integer
//         int a1 = Integer.parseInt(n1);
//         int b1 = Integer.parseInt(n2);

//         System.out.println("Addition of a and b is: " + (a + b));
//         System.out.println("Subtraction of a and b is: " + (a - b));
//         System.out.println("Multiplication of a and b is: " + (a * b));
//         System.out.println("Division of a and b is: " + (a / b));
//         System.out.println("Modulus of a and b is: " + (a % b));
//         System.out.println("Addition of a1 and b1 is: " + (a1 + b1));
        
//     }
// }


// import java.io.*;
// class Unary
// {
//     public static void main(String[] args)
//     {
//         int a = 10, b = 10;
//         System.out.println("Postincrement : " + (a++));
//         System.out.println("Preincrement : " + (++a));

//         System.out.println("Postdecrement : " + (b--));
//         System.out.println("Predecrement : " + (--b));
//     }
// }


import java.io.*;
class relationaloperator
{
    public static void main(String[] args)
    {
        int a = 10, b = 20;
        System.out.println("a is greater than b: " + (a > b));
        System.out.println("a is less than b: " + (a < b));
        System.out.println("a is equal to b: " + (a == b));
        System.out.println("a is not equal to b: " + (a != b));
        System.out.println("a is greater than or equal to b: " + (a >= b));
        System.out.println("a is less than or equal to b: " + (a <= b));
    }
}