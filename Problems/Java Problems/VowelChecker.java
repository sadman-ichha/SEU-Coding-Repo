import java.util.Scanner;

public class VowelChecker {
    public static void main(String[] args) {
        System.out.print("Please Enter a Charter: ");
        Scanner scanner = new Scanner(System.in);
        String letter = scanner.nextLine();
        if (letter.length()!=1) {
            System.out.println("Please enter only a single character.");
            return;
        }
        char ch = Character.toUpperCase(letter.charAt(0));
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            System.out.println("Letter is Vowel");
        } else {
            System.out.println("Letter is Consonent");
        }

    }
}