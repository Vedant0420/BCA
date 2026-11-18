// Program 14 (part 2): Importing and using a package
// Compile: javac mypack/Simple.java P14_UsePackage.java
// Run:     java P14_UsePackage

import mypack.Simple;              // import the class from our package (or: import mypack.*;)

public class P14_UsePackage {

    public static void main(String[] args) {

        Simple s = new Simple();   // create object of the imported class
        s.show();
    }
}

/* Expected Output:
Hello from mypack.Simple
*/
