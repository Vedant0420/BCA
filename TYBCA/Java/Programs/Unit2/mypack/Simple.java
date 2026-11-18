// Program 14 (part 1): Creating a package
// The file must be inside a folder with the same name as the package (mypack).

package mypack;                    // first line: declares this class belongs to 'mypack'

public class Simple {              // must be public to be used outside the package

    public void show() {           // must be public to be called from another package
        System.out.println("Hello from mypack.Simple");
    }
}

/* No output on its own - it is used by P14_UsePackage.java */
