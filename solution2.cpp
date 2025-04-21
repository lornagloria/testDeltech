#include <iostream>
#include <string>

using namespace std;

class StudentReport {
public:
    string name;
    string subject;
    int score;

    void displayResult() {
        cout << "Student Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Score: " << score << endl;

        if (score >= 50) {
            cout << "Result: Passed" << endl;
        } else {
            cout << "Result: Failed" << endl;
        }
    }
};

int main() {
    StudentReport student;

    cout << "Enter student's name: ";
    cin >> student.name;

    cout << "Enter the subject: ";
    cin >> student.subject;

    cout << "Enter the score: ";
    cin >> student.score;

    cout << " Student Report Card" << endl;
    student.displayResult();

    return 0;
}