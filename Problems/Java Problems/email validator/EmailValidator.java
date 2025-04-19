/*
    Problem: Write a Java program that checks whether a given email address is valid.
    A valid email must contain both '@' and '.'. 
    Print "Valid Email" if it meets the condition, otherwise print "Invalid Email".
*/

import java.util.Scanner;

public class EmailValidator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your email address: ");
        String email = scanner.nextLine();
        // Check if the email contains both '@' and '.'
        if (email.contains("@") && email.contains(".")) {
            System.out.println("Valid Email");
        } else {
            System.out.println("Invalid Email");
        }
        scanner.close();
    }
}
