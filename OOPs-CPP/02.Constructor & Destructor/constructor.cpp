#include <iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    string name;
    string department;

    /// @brief Default/ non- Parameterized Constructor 
    Teacher(){
        name = "Sadman";
    };

    // Parameterized Constructor 
    Teacher(string name, string department) {
        this->name = name;
        this->department = department;
    }

    void getInfo() {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Department: " << department << endl;
    }
};

int main() {
    // Creating an object 
    Teacher t1=Teacher("Sadman", "CSE");
    t1.getInfo();

    return 0;
}
