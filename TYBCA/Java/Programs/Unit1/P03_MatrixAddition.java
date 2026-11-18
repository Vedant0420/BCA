// Program 3: Addition of two matrices using 2D arrays

public class P03_MatrixAddition {

    public static void main(String[] args) {

        int[][] a = { {1, 2}, {3, 4} };    // first 2x2 matrix
        int[][] b = { {5, 6}, {7, 8} };    // second 2x2 matrix
        int[][] c = new int[2][2];         // result matrix (2 rows, 2 columns)

        for (int i = 0; i < 2; i++) {          // i = row
            for (int j = 0; j < 2; j++) {      // j = column
                c[i][j] = a[i][j] + b[i][j];   // add matching elements
                System.out.print(c[i][j] + " ");   // print on same line
            }
            System.out.println();              // new line after each row
        }
    }
}

/* Expected Output:
6 8
10 12
*/
