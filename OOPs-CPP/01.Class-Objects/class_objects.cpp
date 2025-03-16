#include <iostream>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    int age;

    void display()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Department: " << dept << endl;
        cout << "Teacher Age: " << age << endl;
    }
    // setter method 
    void setSalary(double s)
    {
        salary = s;
    }
    // getter method
    void getSalary()
    {
        cout << "Teacher Salary: " << salary << endl;
    }
};

int main()
{
    
    Teacher t1 = Teacher();
    t1.name = "Sadman";
    t1.setSalary(2500);
    t1.display();
    t1.getSalary();
    return 0;
}
