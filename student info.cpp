#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    float gpa;
};

int main() {
    int num_students;
    cout << "Enter the number of students: ";
    cin >> num_students;

    Student* students = new Student[num_students];

    for (int i = 0; i < num_students; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Roll Number: ";
        cin >> students[i].roll;
        cout << "Name: ";
        cin.ignore();  // Clear the input buffer before taking string input
        getline(cin, students[i].name);
        cout << "GPA: ";
        cin >> students[i].gpa;
    }

    cout << "\nDisplaying Student Data:\n";
    for (int i = 0; i < num_students; ++i) {
        cout << "Student " << i + 1 << ":\n";
        cout << "Roll Number: " << students[i].roll << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "GPA: " << students[i].gpa << endl;
        cout << "---------------------------\n";
    }

    delete[] students;  // Free the allocated memory
    return 0;
}

