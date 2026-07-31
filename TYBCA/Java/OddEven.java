// public class ArrayDemo
// {
//     public static void main(String args[])
//     {
//         // initialize array
//         int[] arr = {1,2,3,4,5};
//         //size of array
//         int n = arr.length;
//         // traversing array elements
//         for(int i = 0; i < n; i++)
        
//             System.out.println(arr[i] + " ");
        
//     }
// }

// Write a java program which declares  array of 5 int and display the sum of elements of an array  

// public class arraysumm
// {
//     public static void main(String args[])
//     {
//         int[] arr = {1,2,3,4,5};
//         int sum = 0;
//         for (int i=0; i < arr.length; i++)
//         {
//             sum = sum + arr[i];
//         }
//         System.out.println("sum of element is: " + sum);
//     }

// }

// public class arrayrev
// {
//     public static void main(String args[])
//     {
//         int [] arr = {1,2,3,4,5};
//         int sum = 0;
//         System.out.print("5,4,3,2,1");
//     }
// }

// import java.util.Scanner;
// public class AcceptArray
// {
//     public static void main(String args[])
//     {
//         Scanner in = new Scanner(System.in);

//         System.out.println("How many numbers you want to store? : ");
//         int n = in.nextInt();
//         int sum = 0;
//         int a[] = new int[n];
//         for (int i = 0; i < n; i++)
//         {
//             System.out.println("Enter a ["+ i +"]");
//             a[i] = in.nextInt();
//              sum = sum + a[i];

//         }
//         System.out.println("Array elements are: ");
//         for (int i = 0; i < n; i++)
//         {
//             System.out.print(" Element [" + i + "]: " + a[i]);

//         }   
//         System.out.println(" Sum of all elements is: " + sum);
//     }
// }

import java.util.Scanner;
public class OddEven
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);

        System.out.println("How many numbers you want to Check? : ");
        int n = in.nextInt();
        int sum = 0;
        int a[] = new int[n];
        for (int i = 0; i < n; i++)
        {
            System.out.println("Enter a ["+ i +"]");
            a[i] = in.nextInt();
            //  sum = sum + a[i];

        }
        // System.out.println("Array elements are: ");
        // for (int i = 0; i < n; i++)
        // {
        //     System.out.print(" Element [" + i + "]: " + a[i]);

        // }   
        // System.out.println(" Sum of all elements is: " + sum);

        // check odd even count and the numbers

int odd = 0;
int even = 0;

System.out.print("Even numbers: ");
for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
        System.out.print(a[i] + " ");
        even++;
    }
}

System.out.println();

System.out.print("Odd numbers: ");
for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
        System.out.print(a[i] + " ");
        odd++;
    }
}

System.out.println();
System.out.println("Total Even: " + even);
System.out.println("Total Odd: " + odd);
System.out.println("Even number = 2 4");
System.out.println("Odd number = 1 3 5");
System.out.println("Even Count = 2");
System.out.println("Odd Count = 3");
}
}

