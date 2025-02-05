#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    int age;
    string student_id;
};

vector<Student> students;

void addStudent() {
    Student student;
    cout << "Enter student name: ";
    cin>>student.name;
    cout << "Enter student age: ";
    cin >> student.age;
    cout << "Enter student ID: ";
    cin>>student.student_id;

    students.push_back(student);
}

void viewStudents() {
    if (students.empty()) {
        cout << "No students found." << endl;
        return;
    }

    cout << "Student List:" << endl;
    for (const auto& student : students) {
        cout << "Name: " << student.name << endl;
        cout << "Age: " << student.age << endl;
        cout << "Student ID: " << student.student_id << endl;
        cout << "------------------------" << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                viewStudents();
                break;
            case 3:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    } while (choice != 3);

    return 0;
}
