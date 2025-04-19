/*
    Problem: Write a Java program that checks whether a given number is a perfect square.
    A number is a perfect square if its square root is a whole number.
*/

import java.util.Scanner;

public class PerfectSquareChecker {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();
        
        // Negative number can't be a perfect square
        if (number < 0) {
            System.out.println("Negative numbers cannot be perfect squares.");
        } else {
            // Find the square root
            double root = Math.sqrt(number);

            // Check if the square root is a whole number
            if (root % 1 == 0) {
                System.out.println(number + " is a Perfect Square.");
            } else {
                System.out.println(number + " is NOT a Perfect Square.");
            }
        }
        scanner.close();
    }
}
