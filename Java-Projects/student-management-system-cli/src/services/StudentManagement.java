package services;

import models.Student;
import java.io.*;
import java.util.Scanner;

public class StudentManagement {
    public static void addStudent() {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Please Enter Student ID: ");
        String id = scanner.nextLine();
        System.out.print("Please Enter Name: ");
        String name = scanner.nextLine();
        System.out.print("Please Enter Program: ");
        String program = scanner.nextLine();
        System.out.print("Please Enter Batch: ");
        String batch = scanner.nextLine();
        System.out.print("Please Enter Password: ");
        String password = scanner.nextLine();
        System.out.print("Please Enter CGPA: ");
        double cgpa = scanner.nextDouble();
        scanner.nextLine();  // Consume newline

        Student student = new Student(id, name, program, batch, password, cgpa);

        try (BufferedWriter writer = new BufferedWriter(new FileWriter("students.txt", true))) {
            writer.write(student.toFileFormat() + "\n");
            System.out.println("Student added successfully!\n");
        } catch (IOException e) {
            System.out.println("Error.....");
        }
    }
}
