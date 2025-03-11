import auth.LoginSystem;
import services.StudentManagement;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        LoginSystem.createUserFile();
        if (!LoginSystem.authenticate()) {
            return;
        }

        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("\n=== Student Management System ===");
            System.out.println("1. Add Student");
            System.out.println("2. Exit");
            System.out.print("Enter your choice:");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    StudentManagement.addStudent();
                    break;
                case 2:
                    System.out.println("Exiting...");
                    return;
                default:
                    System.out.println("Invalid! Try again.");
            }
        }
    }
}
