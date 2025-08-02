#include <iostream>
using namespace std;

// Class Name
class Name {
    string fn; // First name
    string ln; // Last name
public:
    Name() {}
    Name(string f, string l) : fn(f), ln(l) {}

    void setName(string f, string l) {
        fn = f;
        ln = l;
    }

    void printName() const {
        cout << fn << " " << ln;
    }
};

// Class Course
class Course {
    string title;
public:
    Course(string t = "Unknown") : title(t) {}

    void printCourse() const {
        cout << title << endl;
    }
};

// Class Teacher
class Teacher {
    Name n;
    int ID;
    Course* C;     // Pointer to dynamic array of courses
    int courseCount;

public:
    // Constructor
    Teacher(Name a, int b, Course* courses, int count) {
        n = a;
        ID = b;
        courseCount = count;
        C = new Course[courseCount];
        for (int i = 0; i < courseCount; ++i) {
            C[i] = courses[i];
        }
    }

    // Print function
    void printTeacher() const {
        cout << "Teacher Name: ";
        n.printName();
        cout << "\nID: " << ID << endl;
        cout << "Courses:\n";
        for (int i = 0; i < courseCount; ++i) {
            cout << "- ";
            C[i].printCourse();
        }
    }

    // Destructor to free memory
    ~Teacher() {
        delete[] C;
    }
};

// Main function
int main() {
    // Create Name
    Name name("Ali", "Rizvi");

    // Create courses
    Course courseList[] = { Course("Math"), Course("Physics"), Course("Computer Science") };
    int numberOfCourses = sizeof(courseList) / sizeof(courseList[0]);

    // Create Teacher
    Teacher t(name, 101, courseList, numberOfCourses);

    // Print Teacher Info
    t.printTeacher();

    return 0;
}
