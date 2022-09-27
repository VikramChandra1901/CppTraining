#include <iostream>
#include "StudentStruct.h"
using namespace std;

void insertRecord(StudentRecord ptr[], int index);
void printAll(StudentRecord *ptr,int iterator);
void printParticular(StudentRecord *ptr, int iterator);

int main() {
	StudentRecord student[10];
	int iterator = 0;
	int choice;
    cout<<"Program to store and get student records"<<endl;
	while(true) {
		cout<<"Features available\n1. Add a record\n2. View all students record\n3. View particular student record\n4. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice) {
		case 1: insertRecord(student, iterator);
				iterator++;
				break;
		case 2: printAll(student, iterator);
				break;
		case 3: printParticular(student, iterator);
				break;
		case 4: exit(0);
		default: cout<<"Invalid choice"<<endl;
        }
    }
}

void insertRecord(StudentRecord ptr[], int index) {
	cout<<"Enter first name : ";
	cin>>ptr[index].name.firstName;
	cout<<"Enter last name : ";
	cin>>ptr[index].name.lastName;
	cout<<"Enter age : ";
	cin>>ptr[index].age;
	cout<<"Enter id : ";
	cin>>ptr[index].id;
	cout<<"Enter program grade : ";
	cin>>ptr[index].grade.programGrade;
	cout<<"Enter quiz grade : ";
	cin>>ptr[index].grade.quizGrade;
	cout<<"Enter gpa : ";      
	cin>>ptr[index].grade.gpa;

}

void printAll(StudentRecord *ptr,int iterator) {
	for(int i=0; i<iterator; i++) {
		cout<<"----- Student record : " <<i<< " -----"<<endl;
		cout<<"First Name : "<<ptr[i].name.firstName<<endl;
		cout<<"Last Name : "<<ptr[i].name.lastName<<endl;
		cout<<"Age : "<<ptr[i].age<<endl;
		cout<<"Id : "<<ptr[i].id<<endl;
		cout<<"Program Grade : "<<ptr[i].grade.programGrade<<endl;
		cout<<"Quiz Grade : "<<ptr[i].grade.quizGrade<<endl;
		cout<<"GPA : "<<ptr[i].grade.gpa<<endl;
		cout<<"----- End -----"<<endl;
	}
}

void printParticular(StudentRecord *ptr, int iterator) {
	int id;
	cout<<"Enter the Id of the Student : ";
	cin>>id;
	bool present = false;
	for(int i=0; i<iterator; i++) {
		if(ptr[i].id == id) {
			cout<<"----- Student record -----"<<endl;
			cout<<"First Name : "<<ptr[i].name.firstName<<endl;
			cout<<"Last Name : "<<ptr[i].name.lastName<<endl;
			cout<<"Age : "<<ptr[i].age<<endl;
			cout<<"Id : "<<ptr[i].id<<endl;
			cout<<"Program Grade : "<<ptr[i].grade.programGrade<<endl;
			cout<<"Quiz Grade : "<<ptr[i].grade.quizGrade<<endl;
			cout<<"GPA : "<<ptr[i].grade.gpa<<endl;
			cout<<"----- End -----"<<endl;
			present = true;
			break;
		}
	}
	if(present == false) {
		cout<<"Student with Id "<<id<<" does not exists"<<endl;
	}
}