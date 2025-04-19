/*
     Problem 4: Mathematical Constants (Final Keyword)
     Use final to declare constants like PI.
     
 */

public class Main {
    public static void main(String[] args) {
        // Accessing PI constant without creating object
        System.out.println("PI value: " + MathConstants.PI);
    }
}

// final class so it can't be inherited (optional)
final class MathConstants {
    // static: class-level variable
    // final: constant value, cannot be modified
    static final double PI = 3.1416;
}
