#include <iostream>
using namespace std;


struct GradeRec
{
    float percent;
    char grade;
};
struct StudentRec
{
    string lastName;
    string firstName;
    int age;
    GradeRec courseGrade;
};
int main()
{
    StudentRec student;
    cout << "Enter first name: ";
    cin >> student.firstName;
    cout << "Enter last name: ";
    cin >> student.lastName;
    cout << "Enter age: ";
    cin >> student.age;
    cout << "Enter overall percent: ";
    cin >> student.courseGrade.percent;
    if(student.courseGrade.percent >= 80)
    {
        student.courseGrade.grade = 'A';
    }
    else if(student.courseGrade.percent >= 60)
    {
        student.courseGrade.grade = 'B';
    }
    else
    {
        student.courseGrade.grade = 'F';
    }
    cout << "\n\nHello " << student.firstName << ' ' << student.lastName<< endl;
    cout << "You are " << student.age << " years of old.\n";
    cout << "Your overall percent score is " << student.courseGrade.percent << " for a grade of " << student.courseGrade.grade;
    return 0;
}
