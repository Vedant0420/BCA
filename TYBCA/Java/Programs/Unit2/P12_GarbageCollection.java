// Program 12: Garbage collection with finalize() and System.gc()
// An object becomes "garbage" when no reference points to it.
// finalize() is called by the garbage collector just before the object is destroyed.
// (finalize() is deprecated in new Java versions, but is still asked in exams.)

public class P12_GarbageCollection {

    @Override
    protected void finalize() {                      // overriding Object class's finalize()
        System.out.println("Object garbage collected");
    }

    public static void main(String[] args) throws InterruptedException {

        P12_GarbageCollection g1 = new P12_GarbageCollection();
        P12_GarbageCollection g2 = new P12_GarbageCollection();

        g1 = null;          // way 1: set reference to null
        g2 = new P12_GarbageCollection();   // way 2: point reference to a new object (old one is garbage)

        System.gc();        // REQUEST the JVM to run garbage collector (not guaranteed)
        Thread.sleep(500);  // small wait so finalize() has time to print

        System.out.println("End of main");
    }
}

/* Expected Output (order/count may vary because GC is not guaranteed):
Object garbage collected
Object garbage collected
End of main
*/
