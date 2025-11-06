#include <iostream>
#include <string>
using namespace std;

// Define a class for Student
class Student {
public:
    // Member variables
    string name;
    int rollNo;
    float marks;

    // Member function to input student details
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter student's roll number: ";
        cin >> rollNo;
        cout << "Enter student's marks: ";
        cin >> marks;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "\nStudent Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

// Main function
int main() {
    // Create an object of the Student class
    Student student;

    // Call functions to input and display student details
    student.inputDetails();
    student.displayDetails();

    return 0;
}