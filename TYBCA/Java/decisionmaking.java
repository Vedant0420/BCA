// class IfDemo
// {
//     public static void main(String args[])
//     {
//         int i = 10;
//         if(i < 15)
        
//             System.out.println("Inside if block");  
//             System.out.println("10 is less than 15");
//             System.out.println("Outside if block");
// }
// }

//Using ternary operator 

// class IfDemo
// {
//     public static void main(String args[])

// }

// class IfElseDemo
// {
//     public static void main(String args[])
//     {
//         int i = 10;
//         if(i < 15)
//             System.out.println("10 is less than 15");
//         else
//             System.out.println("10 is not less than 15");
//     }
// }


//Q. Write a java program that accepts student name and prn from user and display it, using scanner class
// import java.util.Scanner;
// class StudentInfo
// {
//     public static void main(String args[])
//     {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter student name: ");
//         String name = sc.nextLine();
//         System.out.print("Enter student PRN: ");
//         String prn = sc.nextLine();
        
//         System.out.println("Student Name: " + name);
//         System.out.println("Student PRN: " + prn);
        
//         sc.close();
//     }
// }


// Write a program which accepts two numbers from user and perform arthmetic operations on them

import java.util.Scanner;
class operations
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int num1 = sc.nextInt();
        System.out.print("Enter second number: ");
        int num2 = sc.nextInt();
        System.out.println("Addition: " + (num1 + num2));
        System.out.println("Subtraction: " + (num1 - num2));
        System.out.println("Multiplication: " + (num1 * num2));
        System.out.println("Division: " + (num1 / num2));
        sc.close();
    }
}