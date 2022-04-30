#pragma once
#include <iostream>
#include <string>
#include "student.h"
using namespace std;

class Roster
{
public:
	const static int numStudents = 5;
	Student* classRosterArray[numStudents]; //array that holds data from STUDENTS
	void parse(string studentData);
	void add(string studentID,
		string firstName,
		string lastName,
		string email,
		int age,
		int numberOfDaysToComplete3Courses1,
		int numberOfDaysToComplete3Courses2,
		int numberOfDaysToComplete3Courses3,
		DegreeProgram degreeProgram);
	void printAll();
	void printByDegreeProgram(DegreeProgram degreeProgram);
	void printInvalidEmails();
	void printAverageDaysInCourse(string studentID);
	void removeStudentByID(string studentID);
	~Roster(); //deconstructor

private:
	int lastIndex = -1;
	int i = 0;
};

