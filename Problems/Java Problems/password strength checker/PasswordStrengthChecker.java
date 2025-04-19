/*
    Problem: Write a Java program that asks the user to enter a password.
    If the password has less than 6 characters, print "Weak Password".
    Otherwise, print "Strong Password".
*/

import java.util.Scanner;

public class PasswordStrengthChecker {
    public static void main(String[] args) {
        // Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a password: ");
        String pwd = scanner.nextLine();

        // Check if the password length is less than 6
        if (pwd.length() < 6) {
            System.out.println("Weak Password!");
        } else {
            System.out.println("Strong Password!");
        }

        // Close the scanner
        scanner.close();
    }
}
