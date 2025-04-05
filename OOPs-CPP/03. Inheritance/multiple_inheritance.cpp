#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;
}; 

// Derived class from Person
class Student : public Person {
public:
    int rollNo;
}; 

// Derived class from Student (Multi-level Inheritance)
class Alumni : public Student {
public:
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll No: " << rollNo << endl;
    }
}; 

int main() {
    Alumni a1;
    a1.name = "Sadman";
    a1.age = 12;
    a1.rollNo = 123;

    a1.getInfo();

    return 0;
}
