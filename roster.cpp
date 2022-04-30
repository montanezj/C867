#pragma once
#include <iostream>
#include <string>
#include "roster.h"
using namespace std;
//creates student object for each student table and it populates the classRosterArray
void Roster::parse(string studentData)
{
	int rhs = studentData.find(",");	/*finds comma in example*/
	string studentID = studentData.substr(0, rhs);

	int lhs = rhs + 1; /*move past the previous comma in example*/
	rhs = studentData.find(",", lhs);
	string firstName = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	string lastName = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(".", lhs);
	string email = studentData.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int age = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int days1 = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int days2 = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	int days3 = stoi(studentData.substr(lhs, rhs - lhs));
	lhs = rhs + 1;
	rhs = studentData.find(",", lhs);
	
	DegreeProgram degreeProgram;
	string degreeTypeStrings = studentData.substr(lhs, rhs - lhs);
	if (degreeTypeStrings == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (degreeTypeStrings == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (degreeTypeStrings == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}

	add(studentID, firstName, lastName, email, age, days1, days2, days3, degreeProgram);
}

void Roster::add(string studentID, string firstName, string lastName, string email, int age, int days1, int days2, int days3, DegreeProgram degreeProgram)
{
	int darr[3]{ days1, days2, days3 }; //constructor - puts days into an array
	classRosterArray[++lastIndex] = new Student(studentID, firstName,lastName, email, age, darr, degreeProgram);
}
//removes students from roster by student ID, error message printed if student does not exist
void Roster::removeStudentByID(string studentID) {
	bool found = false;
	for (i = 0; i <= Roster::lastIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			found = true;
			if (i < numStudents - 1) {
				Student* temp = classRosterArray[i];
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = temp;
			}
			Roster::lastIndex--;

			//swaps new last index to maintain proper formatting (A1, A2, A4, A5)
			Student* temp = classRosterArray[Roster::lastIndex];
			classRosterArray[Roster::lastIndex] = classRosterArray[Roster::lastIndex - 1];
			classRosterArray[Roster::lastIndex - 1] = temp;
		}
	}
	if (found) {
		cout << "Student " << studentID << " has been removed" << endl;
	}
	else {
		cout << "Student " << studentID << " was not found" << endl;
	}
}
//print function for all students in classRosterArray
void Roster::printAll()
{
	cout << "List of Student Data" << endl;
	for (int i = 0; i <= Roster::lastIndex; i++)
	{
		classRosterArray[i]->print();
	}
}

//prints the average amount of days the student takes to complete the 3 courses
void Roster::printAverageDaysInCourse(string studentID) {
	for (i = 0; i <= Roster::lastIndex; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << studentID << " | ";
			cout << ((classRosterArray[i]->getDaysToComplete3Courses()[0] + classRosterArray[i]->getDaysToComplete3Courses()[1] + classRosterArray[i]->getDaysToComplete3Courses()[2]) / 3);
			cout << endl;
		}

	}
}

//checks to see if email is valid
//valid emails should follow the format of abc@fakemail.com
void Roster::printInvalidEmails() {
	bool invalid = false;
	for (i = 0; i <= Roster::lastIndex; i++) {
		string email = (classRosterArray[i]->getEmail());
		string studentID = (classRosterArray[i]->getStudentID());
		if (email.find('@') == string::npos || email.find('.') == string::npos || email.find(' ') != string::npos) {
			invalid = true;
			cout << studentID << " | " << email << endl;
		}
		else if (!invalid) {
			cout << "No Invalid Email Addresses" << endl;
		}
	}
}

//prints student info under the specified degreeprogram
void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	for (int i = 0; i <= Roster::lastIndex; i++) {
	if (Roster::classRosterArray[i]->getDegreeProgram() == degreeProgram) classRosterArray[i]->print();
	}
}

//deconstructor
Roster::~Roster() {
	for (i = 0; i < numStudents; ++i) {
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;
	}
}

