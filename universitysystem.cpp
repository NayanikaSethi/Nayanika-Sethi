#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <stdexcept>
using namespace std;

// -------- Custom Exceptions --------
class UniversitySystemException : public exception {
    string msg;
public:
    UniversitySystemException(string m) : msg(m) {}
    virtual ~UniversitySystemException() throw() {}
    virtual const char* what() const throw() { return msg.c_str(); }
};

class GradeException : public UniversitySystemException {
public:
    GradeException(string m) : UniversitySystemException("Grade Error: " + m) {}
};

// -------- Person and Inheritance --------
class Person {
protected:
    string name, id, contact;
    int age;
public:
    Person(string n, int a, string i, string c) : name(n), age(a), id(i), contact(c) {}
    virtual void displayDetails() {
        cout << "Name: " << name << ", Age: " << age << ", ID: " << id << ", Contact: " << contact << endl;
    }
    virtual double calculatePayment() { return 0.0; }
    virtual ~Person() {}
};

class Student : public Person {
protected:
    string program, enrollDate;
    double gpa;
public:
    Student(string n, int a, string i, string c, string p, double g, string d)
        : Person(n, a, i, c), program(p), gpa(g), enrollDate(d) {}
    void displayDetails() {
        cout << "[Student] ";
        Person::displayDetails();
        cout << "Program: " << program << ", GPA: " << gpa << ", Enrollment: " << enrollDate << endl;
    }
};

class Professor : public Person {
protected:
    string dept, specialization, hireDate;
public:
    Professor(string n, int a, string i, string c, string d, string s, string h)
        : Person(n, a, i, c), dept(d), specialization(s), hireDate(h) {}
    void displayDetails() {
        cout << "[Professor] ";
        Person::displayDetails();
        cout << "Department: " << dept << ", Specialization: " << specialization << ", Hire Date: " << hireDate << endl;
    }
    double calculatePayment() {
        return 50000; // basic salary
    }
};

// -------- Other Classes --------
class Course {
public:
    string code, title, description;
    int credits;
    Course(string c, string t, string d, int cr) : code(c), title(t), description(d), credits(cr) {}
};

class Department {
public:
    string name, location;
    double budget;
    Department(string n, string l, double b) : name(n), location(l), budget(b) {}
};

class GradeBook {
    map<string, double> grades;
public:
    void addGrade(string studentID, double grade) {
        if (grade < 0 || grade > 100) throw GradeException("Invalid grade value.");
        grades[studentID] = grade;
    }

    double calculateAverage() {
        double sum = 0;
        int count = 0;
        map<string, double>::iterator it;
        for (it = grades.begin(); it != grades.end(); ++it) {
            sum += it->second;
            count++;
        }
        return count == 0 ? 0 : sum / count;
    }
};

class EnrollmentManager {
    map<string, vector<string> > enrollments;
public:
    void enrollStudent(string studentID, string courseCode) {
        enrollments[courseCode].push_back(studentID);
    }

    int getEnrollmentCount(string courseCode) {
        return enrollments[courseCode].size();
    }
};

// -------- University System --------
class UniversitySystem {
    vector<Person*> people;
    vector<Course*> courses;
    GradeBook gradeBook;
    EnrollmentManager enrollmentManager;
public:
    void addPerson(Person* p) { people.push_back(p); }
    void addCourse(Course* c) { courses.push_back(c); }

    void showAllPeople() {
        for (int i = 0; i < people.size(); i++) {
            people[i]->displayDetails();
        }
    }

    void runTest() {
        Student* s1 = new Student("Nayanika", 20, "24csu137", "nayanikasethi@gmail.com", "CSE", 3.8, "2024");
        Professor* p1 = new Professor("Dr. Seema", 45, "P01", "seema@mail.com", "CSE", "AI", "2010");
        Course* c1 = new Course("CS101", "Intro to C++", "Basics", 3);

        addPerson(s1);
        addPerson(p1);
        addCourse(c1);

        enrollmentManager.enrollStudent("S01", "CS101");
        gradeBook.addGrade("S01", 88.5);

        cout << "\n--- All People ---\n";
        showAllPeople();

        cout << "\nEnrollment Count for CS101: " << enrollmentManager.getEnrollmentCount("CS101") << endl;
        cout << "Average Grade: " << gradeBook.calculateAverage() << endl;
        cout << "Professor Salary: " << p1->calculatePayment() << endl;
    }
};

// -------- Main Function --------
int main() {
    try {
        UniversitySystem us;
        us.runTest();
    } catch (UniversitySystemException &e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
