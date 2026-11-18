// Program 13: Access modifiers - private, default, protected, public
//
// Modifier   | Same class | Same package | Subclass (other pkg) | Everywhere
// private    |    Yes     |     No       |        No            |    No
// default    |    Yes     |     Yes      |        No            |    No
// protected  |    Yes     |     Yes      |        Yes           |    No
// public     |    Yes     |     Yes      |        Yes           |    Yes

class Demo {
    private   int a = 10;      // only inside Demo
              int b = 20;      // default (no keyword): same package
    protected int c = 30;      // same package + subclasses
    public    int d = 40;      // everywhere

    int getA() {               // private data is accessed through a method
        return a;
    }
}

public class P13_AccessModifiers {

    public static void main(String[] args) {

        Demo obj = new Demo();

        // System.out.println(obj.a);   // ERROR: a is private
        System.out.println("private a   = " + obj.getA());
        System.out.println("default b   = " + obj.b);
        System.out.println("protected c = " + obj.c);
        System.out.println("public d    = " + obj.d);
    }
}

/* Expected Output:
private a   = 10
default b   = 20
protected c = 30
public d    = 40
*/
