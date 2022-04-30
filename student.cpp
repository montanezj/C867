#pragma once
#include <iostream>
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;

Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age = 0;
	for (int i = 0; i < days; i++) { this->numberOfDaysToComplete3Courses[i] = 0; }
	this->degreeProgram = DegreeProgram::SECURITY;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int numberOfDaysToComplete3Courses[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->age = age;
	for (int i = 0; i < days; i++) { this->numberOfDaysToComplete3Courses[i] = numberOfDaysToComplete3Courses[i]; }
	this->degreeProgram = degreeProgram;
}

Student::~Student() {}//accessor (getter)

string Student::getStudentID() { return studentID; }
string Student::getFirstName() { return firstName; }
string Student::getLastName() { return lastName; }
string Student::getEmail() { return firstName; }
int Student::getAge() { return age; }
int* Student::getDaysToComplete3Courses() { return numberOfDaysToComplete3Courses; }
DegreeProgram Student::getDegreeProgram() { return degreeProgram;  }

//mutator(setter)
void Student::setStudentID(string ID) { this->studentID = ID; }
void Student::setFirstName(string firstName) { this->firstName = firstName;  }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmail(string email) { this->email = email; }
void Student::setAge(int ageToSet) { this->age = ageToSet; }
void Student::setDaysToComplete3Courses(int daysToSet[]) {
	for (int i = 0; i < days; i++) this->numberOfDaysToComplete3Courses[i] = daysToSet[i];
}

void Student::setDegreeProgram(DegreeProgram degreeToSet) {
	degreeProgram = degreeToSet;
}

//print function
void Student::print()
{
	cout << getStudentID() << "\t" << "First Name: " << getFirstName() << "\t" << "Last Name: " << getLastName() << "\t" << "Age: " << getAge() << "\t";
	cout << "daysInCourse:  {" << getDaysToComplete3Courses()[0] << ", " << getDaysToComplete3Courses()[1] << ", " << getDaysToComplete3Courses()[2] << "} " << "Degree Program: ";
	cout << degreeTypeStrings[(int)getDegreeProgram()] << endl;
};



