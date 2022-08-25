#pragma once
#include "degree.h"
using namespace std;


class Student {


public:


	Student();
	Student(string studID,
		string fName,
		string lName,
		string studEmail,
		int studAge,
		int numberOfDaysToComplete3Courses[],
		DegreeProgram degreeProgram);
	~Student();




	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getDaysToComplete3Courses();
	DegreeProgram getDegreeProgram();



	void setStudentID(string studID);
	void setFirstName(string fName);
	void setLastName(string lName);
	void setLastNamesetEmail(string studEmail);
	void setAge(int numAge);
	void setDaysToComplete3Courses(int numberOfDaysToComplete3Courses[]);
	void setDegreeProgram(DegreeProgram degreeProgram);


	static void printHeader();
	void print();

	const static int days = 3;

private:


	string studID;
	string fName;
	string lName;
	string studEmail;
	int studAge;
	int numberOfDaysToComplete3Courses[days];
	DegreeProgram degreeprogram;


}; 
