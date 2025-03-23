#include <iostream>
using namespace std;


// Base class Person
class Person {
    public:
        string name; 
        int age;   
        
       
    };
    
    // Derived class Student inheriting from Person
    class Student : public Person {
    public:
        int rollNo; // Additional member variable specific to Student

        void getInfo() {
            cout << "Name: " << name << endl;  
            cout << "Age: " << age << endl;   
            cout << "Roll No: " << rollNo << endl; // Corrected label from "Age" to "Roll No"
        } 
    };


int main() {

    Student s1;
    s1.name ="Sadman";
    s1.age =123;
    s1.rollNo =1;
    s1.getInfo();
    
    return 0;
}