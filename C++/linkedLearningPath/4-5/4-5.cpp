// Learning C++
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño

#include <iostream>
#include <vector>

#include "records.h"

using namespace std;

vector<Student> students = {Student(1, "George P. Burdell"),
                            Student(2, "Nancy Rhodes")};

vector<Course> courses = {Course(1, "Algebra", 5), Course(2, "Physics", 4),
                          Course(3, "English", 3), Course(4, "Economics", 4)};

vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                        Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

float GPA = 0.0f;
int id;

int main() {
    cout << "Enter a student ID: ";
    cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here
    int totalCredits = 0;
    for (auto grade : grades) {
        if (grade.get_student_id() == id) {
            int creditVal;
            int course = 0;
            while (course < courses.size()) {
                if (courses[course].get_id() == grade.get_course_id()) {
                    creditVal = courses[course].get_credits();
                    totalCredits += creditVal;
                    break;
                }
                course++;
            }
            switch (grade.get_grade()) {
                case 'A':
                    GPA += (creditVal * 4.0);
                    break;
                case 'B':
                    GPA += (creditVal * 3.0);
                    break;
                case 'C':
                    GPA += (creditVal * 2.0);
                    break;
                case 'D':
                    GPA += (creditVal * 1.0);
                    break;
                default:
                    GPA += 0;
                    break;
            }
        }
    }
    GPA /= totalCredits;

    string student_str;
    student_str =
        students[0].get_name();  // Change this to the selected student's name

    cout << "The GPA for " << student_str << " is " << GPA << endl;
    return (0);
}
