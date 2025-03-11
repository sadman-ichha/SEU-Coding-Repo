package models;

public class Student {
    private String id, name, program, batch, password;
    private double cgpa;

    public Student(String id, String name, String program, String batch, String password, double cgpa) {
        this.id = id;
        this.name = name;
        this.program = program;
        this.batch = batch;
        this.password = password;
        this.cgpa = cgpa;
    }

    public String toFileFormat() {
        return id + "," + name + "," + program + "," + batch + "," + password + "," + cgpa;
    }
}
