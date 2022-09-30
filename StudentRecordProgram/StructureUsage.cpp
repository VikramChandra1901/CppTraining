#include <iostream>
#include "StudentStruct.h"
using namespace std;

static int index = 0;

void insertRecord(StudentRecord ptr[]);
void printAll(StudentRecord *ptr);
void printParticular(StudentRecord *ptr);

int main()
{
    StudentRecord student[10];
    int choice;
    cout << "Program to store and get student records" << endl;
    while (true)
    {
        cout << "Features available\n1. Add a record\n2. View all students record\n3. View particular student record\n4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            insertRecord(student);
            index++;
            break;
        case 2:
            printAll(student);
            break;
        case 3:
            printParticular(student);
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice" << endl;
        }
    }
}

void insertRecord(StudentRecord ptr[])
{
    cout << "Enter first name : ";
    cin >> ptr[index].name.firstName;
    cout << "Enter last name : ";
    cin >> ptr[index].name.lastName;
    cout << "Enter age : ";
    cin >> ptr[index].age;
    cout << "Enter id : ";
    cin >> ptr[index].id;
    cout << "Enter program grade : ";
    cin >> ptr[index].grade.programGrade;
    cout << "Enter quiz grade : ";
    cin >> ptr[index].grade.quizGrade;
    cout << "Enter gpa : ";
    cin >> ptr[index].grade.gpa;
}

void printAll(StudentRecord *ptr)
{
    for (int i = 0; i < index; i++)
    {
        cout << "----- Student record : " << i << " -----" << endl;
        cout << "First Name : " << ptr[i].name.firstName << endl;
        cout << "Last Name : " << ptr[i].name.lastName << endl;
        cout << "Age : " << ptr[i].age << endl;
        cout << "Id : " << ptr[i].id << endl;
        cout << "Program Grade : " << ptr[i].grade.programGrade << endl;
        cout << "Quiz Grade : " << ptr[i].grade.quizGrade << endl;
        cout << "GPA : " << ptr[i].grade.gpa << endl;
        // grade
        float gpa = ptr[i].grade.gpa;
        if (gpa >= 9)
        {
            cout << "Grade : " << Grade::A << endl;
        }
        else if (gpa >= 8 && gpa < 9)
        {
            cout << "Grade : " << Grade::B << endl;
        }
        else if (gpa > 7 && gpa < 8)
        {
            cout << "Grade : " << Grade::C << endl;
        }
        else if (gpa > 6 && gpa < 7)
        {
            cout << "Grade : " << Grade::D << endl;
        }
        else
        {
            cout << "Grade : " << Grade::F << endl;
        }
        cout << "----- End -----" << endl;
    }
}

void printParticular(StudentRecord *ptr)
{
    int id;
    cout << "Enter the Id of the Student : ";
    cin >> id;
    bool present = false;
    for (int i = 0; i < index; i++)
    {
        if (ptr[i].id == id)
        {
            cout << "----- Student record -----" << endl;
            cout << "First Name : " << ptr[i].name.firstName << endl;
            cout << "Last Name : " << ptr[i].name.lastName << endl;
            cout << "Age : " << ptr[i].age << endl;
            cout << "Id : " << ptr[i].id << endl;
            cout << "Program Grade : " << ptr[i].grade.programGrade << endl;
            cout << "Quiz Grade : " << ptr[i].grade.quizGrade << endl;
            cout << "GPA : " << ptr[i].grade.gpa << endl;
            cout << "----- End -----" << endl;
            present = true;
            break;
        }
    }
    if (present == false)
    {
        cout << "Student with Id " << id << " does not exists" << endl;
    }
}