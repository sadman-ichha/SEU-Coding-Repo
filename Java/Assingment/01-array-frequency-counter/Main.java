/*
Question 1. Array Frequency Counter
Write a program that reads a set of integers from the user and displays how many times each unique number appears.
Ensure that repeated values are counted only once in the output.
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 1. Read how many numbers the user wants to input
        System.out.print("Enter number of elements: ");
        int number = scanner.nextInt();

        // 2. Create an array to store the numbers
        int[] array = new int[number];

        // 3. Take input for each element in the array
        for (int i = 0; i < number; i++) {
            System.out.print("Enter element index " + (i + 1) + ": ");
            array[i] = scanner.nextInt();
        }

        // 4. Create a boolean array 'visited' to keep track of counted elements
        boolean[] visited = new boolean[number];

        // 5. Loop through each element to count frequency
        for (int j = 0; j < number; j++) {
            // If this element is already counted, skip it
            if (visited[j]) continue;

            // 6. Start counting this unique element, count is at least 1
            int count = 1;

            // 7. Compare this element with the rest to count duplicates
            for (int k = j + 1; k < number; k++) {
                if (array[j] == array[k]) {
                    count++;
                    visited[k] = true;  // Mark duplicate as visited
                }
            }

            // 8. Mark current element as visited to avoid recounting
            visited[j] = true;

            // 9. Print the element and how many times it occurs
            System.out.println(array[j] + " occurs " + count + " times");
        }

        // 10. Close the scanner to avoid resource leaks
        scanner.close();
    }
}