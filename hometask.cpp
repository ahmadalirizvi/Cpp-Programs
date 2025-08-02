#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(){
        day = 1;
        month = 1;
        year = 2000;
    }
    Date(int d, int m, int y){
        day = d;
        month = m;
        year = y;
    }

    void display() const {
        cout << day << "-" << month << "-" << year;
    }
};


class Person {
private:
    string name;
    Date birthDate;

public:
    Person(){
        name = "";
        birthDate = Date(); 
    }

    Person(string n, int d, int m, int y){
        name = n;   
        birthDate = Date(d, m, y);
    }

    void setPerson(string n, const Date dob) {
        name = n;
        birthDate = dob;
    }

    void displayPerson() const {
        cout << "Name: " << name << ", Birth Date: ";
        birthDate.display();
        cout << endl;
    }
};

class Course {
private:
    string courseName;
    float courseMarks;

public: 
    Course(){
        courseName = " ";
        courseMarks = 0.0;
    }

    void setCourse(string name, float marks) {
        courseName = name;
        courseMarks = marks;
    }

    void displayCourse() const {
        cout << "Course: " << courseName << ", Marks: " << courseMarks << endl;
    }

    string getcourseName() const {
        return courseName;
    }
    float getcourseMarks() const {
        return courseMarks;
    }
};

class Student : public Person {
private:
    int rollNo;
    Course list[5];

public:
    Student() {
        rollNo = 0;
    }

    void setStudent(string name, const Date dob, int roll) {
        setPerson(name, dob);
        rollNo = roll;
    }

    void setCourse(int i,  string name, float marks) {
        if (i >= 0 && i < 5) {
            list[i].setCourse(name, marks);
        }
    }

    void displayStudent() const {
        cout << "Roll No: " << rollNo << endl;
        displayPerson();
        cout << "Courses: " << endl;
        for (int i = 0; i < 5; ++i) {
            list[i].displayCourse();
        }
    }

    float getCourseMarks(int i) const {
        return list[i].getcourseMarks(); 
    }

    string getCourseName(int i) const {
        return list[i].getcourseName(); 
    }

    float calculateAverage() const {
        float total = 0;
        for (int i = 0; i < 5; ++i)
            total += list[i].getcourseMarks();
        return total / 5.0;
    }

    char assignGrade(float marks) const {
        if (marks >= 90) {
            cout << "Grade: A" << endl;
        }
        else if (marks >= 80) {
            cout << "Grade: B" << endl;
        }
        else if (marks >= 70) {
            cout << "Grade: C" << endl;

        }
        else if (marks >= 60) {
            cout << "Grade: D" << endl;
        }
        else {
            cout << "Grade: F" << endl;
        }
    }

    void searchCourse(string courseName) const {
        bool found = false;
        for (int i = 0; i < 5; ++i) {
            string stored = list[i].getcourseName();
            string search = courseName;
            if (stored == search) {
                cout << "Course Found: " << list[i].getcourseName() << ", Marks: " << list[i].getcourseMarks() << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Course not found.\n";
    }

    void topScoringCourse() const {
        int topIndex = 0;
        float max = list[0].getcourseMarks();
        for (int i = 1; i < 5; ++i) {
            if (list[i].getcourseMarks() > max) {
                max = list[i].getcourseMarks() ;
                topIndex = i;
            }
        }
        cout << "Top Scoring Course: " << list[topIndex].getcourseName() << ", Marks: " << max << endl;
    }

    void showTotalAndResult() const {
        float total = 0;
        bool pass = true;
        for (int i = 0; i < 5; ++i) {
            total += list[i].getcourseMarks();
            if (list[i].getcourseMarks() < 50)
                pass = false;
        }
        cout << "Total Marks: " << total << "/500" << endl;
        if(pass == true){
            cout << "Result: Pass" << endl;
        }
        else{
            cout << "Result: Fail" << endl;
        }
    }
};

int main() {
    Student s1;

    s1.setStudent("Ali", Date(15, 8, 2002), 101);

    s1.setCourse(0, "Math", 89.5);
    s1.setCourse(1, "Physics", 75.0);
    s1.setCourse(2, "Chemistry", 82.3);
    s1.setCourse(3, "Biology", 91.0);
    s1.setCourse(4, "English", 87.2);

    s1.displayStudent();

    cout << s1.calculateAverage() << endl;
    s1.topScoringCourse();
    cout << endl;
    s1.showTotalAndResult();
    s1.assignGrade(s1.getCourseMarks(0));
    cout << endl;
    s1.searchCourse("Math");
    cout << endl;


    return 0;
}





