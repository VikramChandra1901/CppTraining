#include <iostream>
#include <string.h>
using namespace std;

enum Grade
{
    A,
    B,
    C,
    D,
    F
};

struct StudentRecord
{
    struct StudentName
    {
        string firstName;
        string lastName;
    } name;
    int age;
    int id;
    struct Grades
    {
        int programGrade;
        int quizGrade;
        float gpa;
    } grade;
};