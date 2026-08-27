
//Q1

// import java.io.*;

// public class bufferr {
//     public static void main(String args[]) throws IOException
//     BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
//         System.out.print("Enter your name: ");
//         String name = br.readLine();
        
//         System.out.println("Hello " + name);
//     }
// }


// Q2

// import java.util.Scanner;
// public class scannerr {
// public static void(String args[]) {
//     Scanner sc = new Scanner(System.in);

//     System.out.print("Enter a number :  ");
//     int num = sc.nextInt();

//     System.out.println("You entered: " + num);
// }
// }

// Q3

// import java.util.Scanner;
// public class forlooop {
//     public static void main(String   args[])
//     {
//         for (int i = 1; i <= 5; i++)
//         {
//             System.out.println("lol");
//         }
//     }
// }


// Q4 

// import java.util.Scanner;
// public class foreachloopp {
//     public static void main(String args[])
//     {
//         int [] numbers = {1,2,3,4,5};
//         for (int i : numbers)
//         {
//             System.out.println(i);
//         }
//     }
// }

// Q5


// import java.util.*;
// public class whilee {
//     public static void main(String args[])
//     {
//     int i = 1;
//     while (i <=5)
//     {
//         System.out.println("i = " + i);
//         i++;
//     }
//     }
// }

// Q6 

// import java.util.Scanner;
// public class arrayy {
//     public static void main(String args[])
//     {
//         int [] arr = {1,2,3,4,5};

//         System.out.println();
//         for (int i = 0; i < arr.length; i++)
//         {
//             System.out.println("Element [" + i + "]: " + arr[i]);
//         }
//     }
// }

// Q7

// import java.util.Scanner;

// public class Program8 {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int[] arr = new int[5];

//         System.out.println("Enter 5 numbers:");
//         for (int i = 0; i < 5; i++) {
//             arr[i] = sc.nextInt();
//         }

//         System.out.print("Array elements: ");
//         for (int i = 0; i < 5; i++) {
//             System.out.print(arr[i] + " ");
//         }
//     }
// }

// Q8 

// import java.util.Scanner;
// public class addelearr {
//     public static void main(String[] args) {
//         int[] arr = {10, 20, 30, 40, 50};
//         int sum = 0;

//         for (int i = 0; i < arr.length; i++) {
//             sum = sum + arr[i];
//         }

//         System.out.println("Sum of array elements: " + sum);
//     }
// }


// Q9
// import java.util.Scanner;
// public class OddEven {
//     public static void main(String[] args) {
//         int[] arr = {1, 2, 3, 4, 5, 6};

//         System.out.print("Even numbers: ");
//         for (int i = 0; i < arr.length; i++) {
//             if (arr[i] % 2 == 0) {
//                 System.out.print(arr[i] + " ");
//             }
//         }

//         System.out.print("\nOdd numbers: ");
//         for (int i = 0; i < arr.length; i++) {
//             if (arr[i] % 2 != 0) {
//                 System.out.print(arr[i] + " ");
//             }
//         }
//     }
// }


// Q10

// import java.util.Scanner;
// public class revarrr {
//     public static void main(String[] args) {
//         int[] arr = {1, 2, 3, 4, 5};

//         System.out.print("Reverse order: ");
//         for (int i = arr.length - 1; i >= 0; i--) {
//             System.out.print(arr[i] + " ");
//         }
//     }
// }

//Q11

// import java.util.Scanner;
// public class largesmall {
//     public static void main(String args[]) 
//     {
//     int[] arr = {1, 2, 3, 4, 5};

//         int max = arr[0];
//         int min = arr[0];

//         for (int i = 1; i < arr.length; i++) {
//             if (arr[i] > max) {
//                 max = arr[i];
//             }
//             if (arr[i] < min) {
//                 min = arr[i];
//             }
//         }

//         System.out.println("Largest element: " + max);
//         System.out.println("Smallest element: " + min);
//     }
// }

// Q12 

// import java.util.Scanner;

// public class Main {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter number: ");
//         int num = sc.nextInt();
//         long fact = 1;
//         for (int i = 1; i <= num; i++) {
//             fact *= i;
//         }
//         System.out.println("Factorial = " + fact);
//     }
// }

// Write a java program to area of triangle

// import java.util.Scanner;
// public class TriangleArea {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter base of triangle: ");
//         double base = sc.nextDouble();
//         System.out.print("Enter height of triangle: ");
//         double height = sc.nextDouble();
//         double area = 0.5 * base * height;
//         System.out.println("Area of triangle: " + area);
//     }
// }
// import java.util.Scanner;
// public class CircleArea {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter radius of circle: ");
//         double radius = sc.nextDouble();
//         double area = 3.14 * radius * radius;
//         System.out.println("Area of Triangle: " + area);
//     }
// }

///////////////////////////////////////////////////////////////////

// write a java program for five products related to computer.

// import java.util.Scanner;
// public class CircleArea { 
    
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         String[] products = new String[5];

//         System.out.println("Enter 5 computer products:");
//         for (int i = 0; i < 5; i++) {
//             products[i] = sc.nextLine();
//         }

//         System.out.println("You entered the following products:");
//         for (String product : products) {
//             System.out.println(product);
//         }
//     }
// }


// Write a java program for 5 products of computer and their prices and calculate total price of all products. using object class 
// import java.util.Scanner;
// class Product {
//     String name;
//     double price;

//     Product(String name, double price) {
//         this.name = name;
//         this.price = price;
//     }
// }

// write a java program to create an array of 5 students to accept prn name and display the output using array object class

// import java.util.Scanner;
// class Student {
//     String prn;
//     String name;

//     Student(String prn, String name) {
//         this.prn = prn;
//         this.name = name;
//     }
//     void display() {
//         System.out.println("PRN: " + prn + ", Name: " + name);
//     }


// }

// write a java program for array of employee to accept using scanner class and display the output using array of object class
import java.util.Scanner;

class Employee {
    String name;
    int id;
    double salary;

    Employee(String name, int id, double salary) {
        this.name = name;
        this.id = id;
        this.salary = salary;
    }

    void display() {
        System.out.println("Employee ID: " + id + ", Name: " + name + ", Salary: " + salary);
    }
}

public class arrayofemployee {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employee[] employees = new Employee[5];

        for (int i = 0; i < employees.length; i++) {
            System.out.print("Enter name of employee " + (i + 1) + ": ");
            String name = sc.nextLine();

            System.out.print("Enter ID of employee " + (i + 1) + ": ");
            int id = Integer.parseInt(sc.nextLine());

            System.out.print("Enter salary of employee " + (i + 1) + ": ");
            double salary = Double.parseDouble(sc.nextLine());

            employees[i] = new Employee(name, id, salary);
        }

        System.out.println("\nEmployee Details:");
        for (Employee emp : employees) {
            emp.display();
        }
    }
}