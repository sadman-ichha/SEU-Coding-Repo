/*
    Problem: Write a Java program that takes three numbers as input
    and prints the largest among them using Math functions.
*/

import java.util.Scanner;

public class LargestOfThree {
    public static void main(String[] args) {
        // Scanner object to take input from user
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter first number: ");
        int num1 = scanner.nextInt();
        System.out.print("Enter second number: ");
        int num2 = scanner.nextInt();
        System.out.print("Enter third number: ");
        int num3 = scanner.nextInt();

        // Use Math.max to find the largest number
        int max = Math.max(num1, Math.max(num2, num3));
        System.out.println("The largest number is: " + max);
        scanner.close();
    }
}
