/*
 Writeastudent class and use it in your program. Store the data of 10 students and display
 the sorted data according to their roll numbers, dates of birth, and total marks
*/ 

#include <iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    string name;
    string dob; 
    int totalMarks;

    void input() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Date of Birth (DD-MM-YYYY): ";
        cin >> dob;
        cout << "Enter Total Marks: ";
        cin >> totalMarks;
    }

    void display() {
        cout << rollNumber << "\t" << name << "\t" << dob << "\t" << totalMarks << endl;
    }
};

void sortByRollNumber(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

void sortByDOB(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].dob > students[j + 1].dob) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

void sortByTotalMarks(Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].totalMarks < students[j + 1].totalMarks) {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

int main() {
    const int numStudents = 10;
    Student students[numStudents];

    cout << "Enter details for 10 students:\n";
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].input();
    }

    cout << "\nSorted by Roll Number:\n";
    sortByRollNumber(students, numStudents);
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }

    cout << "\nSorted by Date of Birth:\n";
    sortByDOB(students, numStudents);
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }

    cout << "\nSorted by Total Marks:\n";
    sortByTotalMarks(students, numStudents);
    for (int i = 0; i < numStudents; i++) {
        students[i].display();
    }

    return 0;
}
