// Program 5: Accept student name, PRN and percentage using Scanner

import java.util.Scanner;   // Scanner class is in java.util package

public class P05_ScannerDemo {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);   // System.in = keyboard input

        System.out.print("Enter name: ");
        String name = sc.nextLine();           // reads a full line (String)

        System.out.print("Enter PRN: ");
        long prn = sc.nextLong();              // reads a long number

        System.out.print("Enter percentage: ");
        double per = sc.nextDouble();          // reads a decimal number

        System.out.println("Name: " + name);
        System.out.println("PRN: " + prn);
        System.out.println("Percentage: " + per);

        sc.close();                            // close the Scanner
    }
}

/* Expected Output (input: Rahul, 1234567890, 85.5):
Enter name: Rahul
Enter PRN: 1234567890
Enter percentage: 85.5
Name: Rahul
PRN: 1234567890
Percentage: 85.5
*/
