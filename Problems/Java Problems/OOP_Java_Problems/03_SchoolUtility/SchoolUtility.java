/*  Problem 3: School Utility (Static Keyword)
 All students study at the same university. Use static variable.
*/
public class SchoolUtility {
    public static void main(String[] args) {
        // Creating a student object
        School school = new School("Sadman");
        school.printInfo(); // Output: Sadman studies at Southeast University
    }
}

class School {
    // Static variable: common university name for all students
    static String univ = "Southeast University";

    // Instance variable: unique student name
    String studentName;

    // Constructor to initialize the student name
    School(String name) {
        studentName = name;
    }

    // Method to print student info
    public void printInfo() {
        System.out.println(studentName + " studies at " + univ);
    }
}
