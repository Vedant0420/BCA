// Program 4: Print command-line arguments and add two numbers from them
// Run: java P04_CommandLineArgs 10 20

public class P04_CommandLineArgs {

    public static void main(String[] args) {   // args[] holds the command-line values

        System.out.println("Number of arguments: " + args.length);

        for (int i = 0; i < args.length; i++) {          // print every argument
            System.out.println("args[" + i + "] = " + args[i]);
        }

        if (args.length >= 2) {                          // need at least 2 values to add
            int a = Integer.parseInt(args[0]);           // convert String "10" to int 10
            int b = Integer.parseInt(args[1]);           // convert String "20" to int 20
            System.out.println("Sum = " + (a + b));
        }
    }
}

/* Expected Output (java P04_CommandLineArgs 10 20):
Number of arguments: 2
args[0] = 10
args[1] = 20
Sum = 30
*/
