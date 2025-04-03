#include <iostream>
using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int rollNumber;

public:
    void setStudentDetails(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void displayStudentDetails() {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Derived class: Marks (inherits from Student)
class Marks : virtual public Student {
protected:
    int subject1, subject2, subject3, totalAcademicMarks;

public:
    void setMarks(int m1, int m2, int m3) {
        subject1 = m1;
        subject2 = m2;
        subject3 = m3;
        totalAcademicMarks = subject1 + subject2 + subject3;
    }

    void displayMarks() {
        cout << "Academic Marks: " << subject1 << ", " << subject2 << ", " << subject3 << endl;
        cout << "Total Academic Marks: " << totalAcademicMarks << endl;
    }

    int getAcademicTotal() {
        return totalAcademicMarks;
    }
};

// Derived class: Sports (inherits from Student)
class Sports : virtual public Student {
protected:
    int sportsMarks;

public:
    void setSportsMarks(int sm) {
        sportsMarks = sm;
    }

    void displaySportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }

    int getSportsMarks() {
        return sportsMarks;
    }
};

// Final class: Result (inherits from both Marks & Sports)
class Result : public Marks, public Sports {
private:
    int totalMarks;
    float average;

public:
    void calculateResult() {
        totalMarks = getAcademicTotal() + getSportsMarks();
        average = totalMarks / 4.0; // 3 subjects + 1 sports mark
    }

    void displayResult() {
        displayStudentDetails();
        displayMarks();
        displaySportsMarks();
        cout << "Total Marks (Academic + Sports): " << totalMarks << endl;
        cout << "Average Marks: " << average << endl;
    }
};

int main() {
    // Create an object of Result
    Result student1;

    // Set student details
    student1.setStudentDetails("Rahul Sharma", 101);

    // Set academic marks
    student1.setMarks(85, 90, 80);

    // Set sports marks
    student1.setSportsMarks(20);

    // Calculate overall performance
    student1.calculateResult();

    // Display complete student performance
    cout << "Student Performance Report:\n";
    student1.displayResult();

    return 0;
}
