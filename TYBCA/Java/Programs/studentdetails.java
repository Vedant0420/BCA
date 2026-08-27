import java.util.Scanner;

class Student {
    String name;
    int prn;

    Student(String name, int prn) {
        this.name = name;
        this.prn = prn;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("PRN: " + prn);
    }
}

public class studentdetails {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of students: ");
        int n = sc.nextInt();
        sc.nextLine();
        Student[] students = new Student[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter name of student " + (i + 1) + ": ");
            String name = sc.nextLine();
            System.out.print("Enter PRN of student " + (i + 1) + ": ");
            int prn = sc.nextInt();
            sc.nextLine();
            students[i] = new Student(name, prn);
        }

        System.out.println("\nStudent Details:");
        for (Student student : students) {
            student.display();
            System.out.println();
        }

        sc.close();
    }
}