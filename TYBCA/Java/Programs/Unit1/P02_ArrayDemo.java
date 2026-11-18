// Program 2: Sum, average, largest and smallest element of an array

public class P02_ArrayDemo {

    public static void main(String[] args) {

        int[] arr = {10, 25, 5, 40, 20};   // declare and initialize an array

        int sum = 0;                       // to store the total
        int largest = arr[0];              // assume first element is largest
        int smallest = arr[0];             // assume first element is smallest

        for (int i = 0; i < arr.length; i++) {   // arr.length = number of elements
            sum = sum + arr[i];                  // add each element to sum

            if (arr[i] > largest)                // found a bigger number?
                largest = arr[i];

            if (arr[i] < smallest)               // found a smaller number?
                smallest = arr[i];
        }

        double average = (double) sum / arr.length;   // cast to double to get decimal result

        System.out.println("Sum      = " + sum);
        System.out.println("Average  = " + average);
        System.out.println("Largest  = " + largest);
        System.out.println("Smallest = " + smallest);
    }
}

/* Expected Output:
Sum      = 100
Average  = 20.0
Largest  = 40
Smallest = 5
*/
