// Program 11: Object class methods - getClass(), hashCode(), toString()
// Every class in Java automatically extends the Object class.

class Car {
    String model = "Swift";
}

public class P11_ObjectClassDemo {

    public static void main(String[] args) {

        Car c = new Car();

        System.out.println(c.getClass().getName());   // name of the object's class
        System.out.println(c.hashCode());             // a unique-ish number for the object
        System.out.println(c.toString());             // default: ClassName@hexHashCode
    }
}

/* Expected Output (the numbers change on every run):
Car
1072591677
Car@3fee733d
*/
