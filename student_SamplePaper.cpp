#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students allowed

//  Student class definition
class Student {
public:
    int rollNo;
    string name;
    int marks[3];

    // Default constructor
    Student() {
        rollNo = -1;
        name = "";
        marks[0] = marks[1] = marks[2] = 0;
    }

    // Set student data with validation
    void setData(int r, string n, int m1, int m2, int m3) {
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100)
            throw "Invalid marks!";
        rollNo = r;
        name = n;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }

    // Calculate average marks
    float average() const {
        return (marks[0] + marks[1] + marks[2]) / 3.0;
    }

    // Display student details
    void display() const {
        cout << "Roll No: " << rollNo << ", Name: " << name
             << ", Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2]
             << ", Average: " << average() << endl;
    }

    // Operator overloading: ++ to add bonus marks
    void operator++() {
        for (int i = 0; i < 3; i++) {
            if (marks[i] < 100)
                marks[i]++;
        }
    }

    // Operator overloading: > to compare students by average
    bool operator>(const Student& other) const {
        return this->average() > other.average();
    }
};

// 📘 Gradebook class to manage multiple students
class Gradebook {
    Student students[MAX_STUDENTS];
    int count;

public:
    Gradebook() {
        count = 0;
    }

    // Add student to gradebook
    void addStudent(Student s) {
        for (int i = 0; i < count; i++) {
            if (students[i].rollNo == s.rollNo)
                throw "Duplicate roll number!";
        }
        if (count >= MAX_STUDENTS)
            throw "Gradebook is full!";
        students[count++] = s;
    }

    // Display all students
    void displayAll() {
        if (count == 0)
            throw "Gradebook is empty!";
        for (int i = 0; i < count; i++)
            students[i].display();
    }

    // Search student by roll number
    Student* search(int roll) {
        for (int i = 0; i < count; i++) {
            if (students[i].rollNo == roll)
                return &students[i];
        }
        return nullptr;
    }

    // Save student records to file
    void saveToFile() {
        ofstream out("gradebook.txt");
        for (int i = 0; i < count; i++) {
            out << students[i].rollNo << "," << students[i].name << ","
                << students[i].marks[0] << "," << students[i].marks[1] << ","
                << students[i].marks[2] << endl;
        }
        out.close();
    }

    // Load student records from file
    void loadFromFile() {
        ifstream in("gradebook.txt");
        if (!in) return;
        string line;
        while (getline(in, line)) {
            int r, m1, m2, m3;
            string n;
            size_t pos1 = line.find(',');
            r = stoi(line.substr(0, pos1));
            size_t pos2 = line.find(',', pos1 + 1);
            n = line.substr(pos1 + 1, pos2 - pos1 - 1);
            size_t pos3 = line.find(',', pos2 + 1);
            m1 = stoi(line.substr(pos2 + 1, pos3 - pos2 - 1));
            size_t pos4 = line.find(',', pos3 + 1);
            m2 = stoi(line.substr(pos3 + 1, pos4 - pos3 - 1));
            m3 = stoi(line.substr(pos4 + 1));

            Student s;
            try {
                s.setData(r, n, m1, m2, m3);
                addStudent(s);
            } catch (...) {
                continue; // Skip invalid or duplicate entries
            }
        }
        in.close();
    }
};

// 🚀 Main function: program starts here
int main() {
    Gradebook gb;
    gb.loadFromFile(); // Load existing records from file

    try {
        // Create two students
        Student s1, s2;
        s1.setData(1, "Alice", 90, 85, 88);
        s2.setData(2, "Bob", 70, 75, 80);

        // Add students to gradebook
        gb.addStudent(s1);
        gb.addStudent(s2);

        ++s1; // Apply bonus marks to Alice

        gb.displayAll(); // Show all student records

        // Search and update Bob's marks
        Student* found = gb.search(2);
        if (found) {
            found->setData(2, "Bob", 95, 90, 92); // Update marks
        }

        gb.saveToFile(); // Save updated records to file
    } catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
