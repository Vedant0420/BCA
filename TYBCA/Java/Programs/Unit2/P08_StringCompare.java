// Program 8: equals() vs == for Strings
// ==       compares REFERENCES (are both the same object in memory?)
// equals() compares CONTENT    (do both have the same characters?)

public class P08_StringCompare {

    public static void main(String[] args) {

        String s1 = "Java";              // stored in the String constant pool
        String s2 = "Java";              // reuses the SAME object from the pool
        String s3 = new String("Java");  // 'new' always creates a NEW object

        System.out.println(s1 == s2);        // true  - same object
        System.out.println(s1 == s3);        // false - different objects
        System.out.println(s1.equals(s3));   // true  - same content
    }
}

/* Expected Output:
true
false
true
*/
