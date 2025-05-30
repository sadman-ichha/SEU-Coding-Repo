import java.util.Scanner;

public class MatrixAnalysis{
    public static void main(String[] agrs){
        System.out.println("input 4*4 matrix: ");
        Scanner scanner = new Scanner(System.in);

        int row = 2, column = 2;
        int[][] arr = new int[row][column];

        for(int i =0; i<row;i++){
            for(int j=0; j<column;j++){
                arr[i][j]= scanner.nextInt();
            }
        }

       // Print the matrix
       System.out.println("Matrix you entered:");
       for (int i = 0; i < row; i++) {
           for (int j = 0; j < column; j++) {
               System.out.print(arr[i][j] + " "); 
           }
           System.out.println();
       }

       System.out.println("Matrix max entered:");
    
       for (int i = 0; i < row; i++) {
        int maxRow=arr[i][0];
         for(int j=1;j<column;j++){
            if(arr[i][j]>maxRow){
               maxRow = arr[i][j];
            }
           }
           System.out.println("Row " + (i + 1) + " max: " + maxRow);
       }

       System.out.println("Matrix hightest entered:");
       int hightest=arr[0][0];
       for (int i = 0; i < row; i++) {
         for(int j=0;j<column;j++){
            if(arr[i][j]>hightest){
                hightest = arr[i][j];
            }
           }
       }
       System.out.println("Maximum value in the matrix: " + hightest);


    }
}