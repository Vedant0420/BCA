// Program 6: Accept student details using BufferedReader

import java.io.*;   // BufferedReader, InputStreamReader, IOException are in java.io

public class P06_BufferedReaderDemo {

    public static void main(String[] args) throws IOException {   // readLine() can throw IOException

        // InputStreamReader converts bytes to characters, BufferedReader reads them line by line
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("Enter name: ");
        String name = br.readLine();                         // readLine() always returns a String

        System.out.print("Enter PRN: ");
        long prn = Long.parseLong(br.readLine());            // convert String to long

        System.out.print("Enter percentage: ");
        double per = Double.parseDouble(br.readLine());      // convert String to double

        System.out.println("Name: " + name);
        System.out.println("PRN: " + prn);
        System.out.println("Percentage: " + per);
    }
}

/* Expected Output (input: Rahul, 1234567890, 85.5):
Enter name: Rahul
Enter PRN: 1234567890
Enter percentage: 85.5
Name: Rahul
PRN: 1234567890
Percentage: 85.5
*/
