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
    Teacher(string n, string d) {
        name = n;
        department = d;
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
