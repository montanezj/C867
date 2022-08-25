#pragma once
#include "student.h"
#include <iostream>
using namespace std;

class Roster
{

public:
	const static int numStudents = 5;
	int lastIndex = -1;
	Student* classRosterArray[numStudents]; //array that holds data from STUDENTS


	void parseData(string studentData);
	void add(string studentID,
		string firstName,
		string lastName,
		string email,
		int age,
		int numberOfDaysToComplete3Courses1,
		int numberOfDaysToComplete3Courses2,
		int numberOfDaysToComplete3Courses3,
		DegreeProgram degreeprogram);

	void printAll();
	void printByDegreeProgram(DegreeProgram degreeprogram);
	void printAverageDaysInCourse(string studentID); 
	void remove(string studentID); 
	void printInvalidEmails(); 
	~Roster();//deconstructor



};
