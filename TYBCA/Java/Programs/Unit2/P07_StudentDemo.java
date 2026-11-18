// Program 7: Class & object, array of objects, and overriding toString()

class Student {                      // a class is a blueprint
    int rollNo;                      // instance variable
    String name;                     // instance variable

    void display() {                 // method to print the details
        System.out.println(rollNo + " " + name);
    }

    @Override
    public String toString() {       // overriding Object class's toString()
        return "Student[rollNo=" + rollNo + ", name=" + name + "]";
    }
}

public class P07_StudentDemo {

    public static void main(String[] args) {

        // ---- 1. Class and object ----
        Student s = new Student();   // create an object using 'new'
        s.rollNo = 1;                // set values using dot (.) operator
        s.name = "Amit";
        s.display();                 // call the method

        // ---- 2. Array of objects (3 students) ----
        Student[] arr = new Student[3];          // array that can hold 3 Student references
        String[] names = {"Riya", "Karan", "Neha"};

        for (int i = 0; i < arr.length; i++) {
            arr[i] = new Student();              // each element needs its own object
            arr[i].rollNo = i + 101;
            arr[i].name = names[i];
        }
        for (int i = 0; i < arr.length; i++) {
            arr[i].display();
        }

        // ---- 3. toString() ----
        System.out.println(s);       // println(object) automatically calls toString()
    }
}

/* Expected Output:
1 Amit
101 Riya
102 Karan
103 Neha
Student[rollNo=1, name=Amit]
*/
