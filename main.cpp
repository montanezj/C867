#pragma once
#include <iostream>
#include <string>
#include "roster.h"
using namespace std;

int main() {
	//prints out my info, 
	cout << "C867-Scripting & Programming:Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 001389569" << endl;
	cout << "Name: Jason Montanez" << endl;
	cout << endl;

	const int numStudents = 5;

	//student info
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Jason,Montanez,jmon306@wgu.edu,24,20,30,30,SOFTWARE" };

	Roster classRoster;

	//adds students to roster
	for (int i = 0; i < numStudents; i++) {
		classRoster.parse(studentData[i]);
	}

	classRoster.printAll();
	cout << endl;

	cout << "Invalid Email Addresses" << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	cout << "Average Days In Course" << endl;
	for (int i = 0; i < numStudents; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
	}
	cout << endl;

	cout << "List of Software Students" << endl;
	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
	cout << endl;

	classRoster.removeStudentByID("A3");
	cout << endl;

	classRoster.printAll();
	cout << endl;

	classRoster.removeStudentByID("A3");
	cout << endl;

	return 0;

};


