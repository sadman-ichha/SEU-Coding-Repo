package auth;
import java.io.*;
import java.util.Scanner;

public class LoginSystem {
    public static void createUserFile() {
        File file = new File("users.txt");

        if (!file.exists()) {
            try (BufferedWriter writer = new BufferedWriter(new FileWriter(file))) {
                writer.write("sadman_seu,12345678\n");
                System.out.println("Default user file created!");
            } catch (IOException e) {
                System.out.println("Error creating users.txt file!");
            }
        }
    }

    public static boolean authenticate() {
        Scanner scanner = new Scanner(System.in);
        String storedUsername = "", storedPassword = "";

        try (BufferedReader br = new BufferedReader(new FileReader("users.txt"))) {
            String line = br.readLine();
            if (line != null) {
                String[] credentials = line.split(",");
                if (credentials.length == 2) {
                    storedUsername = credentials[0].trim();
                    storedPassword = credentials[1].trim();
                } else {
                    System.out.println("Error: Invalid user file format.");
                    return false;
                }
            }
        } catch (IOException e) {
            System.out.println("Error reading users.txt file!");
            return false;
        }

        while (true) {
            System.out.print("Please Enter Username: ");
            String username = scanner.nextLine().trim();
            System.out.print("Please Enter Password: ");
            String password = scanner.nextLine().trim();

            if (username.equals(storedUsername) && password.equals(storedPassword)) {
                System.out.println("Login Successful!\n");
                return true;
            } else {
                System.out.println("Invalid! Try Again.\n");
            }
        }
    }
}
