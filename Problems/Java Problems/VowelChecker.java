/*
    Problem: Write a Java program that takes a single character as input
    and determines whether it is a vowel (a, e, i, o, u) or a consonant.
    Ignore case sensitivity.
*/

import java.util.Scanner;

public class VowelChecker {
    public static void main(String[] args) {
        // Scanner object to take input from the user
        Scanner scanner = new Scanner(System.in);

        System.out.print("Please Enter a Character: ");
        String letter = scanner.nextLine();
        if (letter.length() != 1) {
            System.out.println("Please enter only a single character.");
            return;
        }
        // Convert the character to uppercase to ignore case sensitivity
        char ch = Character.toUpperCase(letter.charAt(0));
        
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            System.out.println("Vowel");
        }
        // Check if the character is an alphabet letter but not a vowel
        else if (Character.isLetter(ch)) {
            System.out.println("Consonant");
        }
        else {
            System.out.println("Not a valid letter.");
        }
        scanner.close();
    }
}
