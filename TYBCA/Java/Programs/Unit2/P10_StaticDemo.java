// Program 10: static variable, static method and static block (count number of friends)
// static members belong to the CLASS, not to each object - they are shared by all objects.

class Friend {
    String name;
    static int count;              // static variable: ONE copy shared by all objects

    static {                       // static block: runs ONCE when the class is loaded
        count = 0;
        System.out.println("Static block executed");
    }

    Friend(String name) {
        this.name = name;
        count++;                   // every new friend increases the shared count
    }

    static void showCount() {      // static method: called using the class name
        System.out.println("Total friends: " + count);
    }
}

public class P10_StaticDemo {

    public static void main(String[] args) {

        new Friend("Aman");        // static block runs before this first object is created
        new Friend("Sneha");
        new Friend("Rohit");

        Friend.showCount();        // no object needed to call a static method
    }
}

/* Expected Output:
Static block executed
Total friends: 3
*/
