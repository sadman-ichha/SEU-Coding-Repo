/*
 Problem 1: University Student Management System
 Concepts Used: Class, Object, Access Modifiers, Constructor
 Scenario:
 You need to store and display student information such as name, ID, and department.
*/

public class StudentManagement {
    public static void main(String[] args) {
        Student s1 = new Student("Sadman", 2, "CSE");
        s1.printInfo();
    }
}

// Class to store student information
class Student {
    private String name;
    private int id;
    private String department;

    // Constructor to initialize student information
    public Student(String name, int id, String department) {
        this.name = name;
        this.id = id;
        this.department = department;
    }

    // Method to display student details
    public void printInfo() {
        System.out.println("Name: " + name + ", ID: " + id + ", Department: " + department);
    }
}
