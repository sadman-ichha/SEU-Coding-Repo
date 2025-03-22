#include <iostream>
using namespace std;

class Student {
public:
    string name;
    double* cgpaPtr;   // Pointer to store the CGPA

    // Parameterized constructor to initialize name and cgpa
    Student(string name, double cgpa) {
        cout << "Student is calling.." << endl; 
        this->name = name;     // Assigns the given name to the member variable
        cgpaPtr = new double;  // Dynamically allocates memory for cgpa
        *cgpaPtr = cgpa;       // Sets the value of cgpa in the allocated memory
    }

    // Function to print student information (name and cgpa)
    void getInfo() {
        cout << "Name: " << name << endl;          // Prints the student's name
        cout << "cgpa: " << *cgpaPtr << endl;     // Dereferences cgpaPtr and prints the CGPA value
    }

    // Destructor: This is called when the object goes out of scope or is deleted
    ~Student() {
        cout << "Hi..Everything is deleted" << endl;
        delete cgpaPtr;  // Frees the dynamically allocated memory for cgpa
    }
};

int main() {
    // Creating a Student object using parameterized constructor
    Student s1 = Student("Sadman", 3.24);  // Name: "Sadman", CGPA: 3.24
    s1.getInfo();  // Calls getInfo() to print student information
    return 0;
}
