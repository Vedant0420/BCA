// Program 9 (all in one): Default, Parameterized, Overloaded and Copy constructors + 'this' keyword
// A constructor has the SAME name as the class and NO return type.
// It runs automatically when an object is created with 'new'.

class Employee {
    int id;
    String name;

    // 1. DEFAULT constructor (no parameters)
    Employee() {
        id = 0;
        name = "Unknown";
        System.out.println("Default constructor called");
    }

    // 2. PARAMETERIZED constructor (takes values)
    //    'this' refers to the current object: this.id = object's variable, id = parameter
    Employee(int id, String name) {
        this.id = id;
        this.name = name;
        System.out.println("Parameterized constructor called");
    }

    // 3. CONSTRUCTOR OVERLOADING: same name, different parameters
    //    this(...) calls another constructor of the same class (must be the first line)
    Employee(int id) {
        this(id, "NoName");
        System.out.println("Overloaded constructor (1 parameter) called");
    }

    // 4. COPY constructor: creates a new object by copying another object
    Employee(Employee e) {
        this.id = e.id;
        this.name = e.name;
        System.out.println("Copy constructor called");
    }

    void display() {
        System.out.println("ID: " + id + ", Name: " + name);
    }
}

public class P09_Constructor {

    public static void main(String[] args) {

        Employee e1 = new Employee();              // calls default constructor
        e1.display();

        Employee e2 = new Employee(101, "Rahul");  // calls parameterized constructor
        e2.display();

        Employee e3 = new Employee(102);           // calls overloaded constructor
        e3.display();

        Employee e4 = new Employee(e2);            // calls copy constructor (copies e2)
        e4.display();
    }
}

/* Expected Output:
Default constructor called
ID: 0, Name: Unknown
Parameterized constructor called
ID: 101, Name: Rahul
Parameterized constructor called
Overloaded constructor (1 parameter) called
ID: 102, Name: NoName
Copy constructor called
ID: 101, Name: Rahul
*/
