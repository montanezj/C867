#include "roster.h"

void Roster::parseData(string studentData)
{
	DegreeProgram dp = NETWORK;
	if (studentData.at(2) == 'T') dp = NETWORK;
	else if (studentData.at(2) == 'C') dp = SECURITY;
	else if (studentData.at(2) == 'F') dp = SOFTWARE;

	int right = studentData.find(","); 
	string sID = studentData.substr(0, right);

	int left = right + 1;
	right = studentData.find(",", left);
	string fname = studentData.substr(left, right - left);


	left = right + 1;
	right = studentData.find(",", left);
	string lname = studentData.substr(left, right - left); 

	left = right + 1;
	right = studentData.find(",", left);
	string email = studentData.substr(left, right - left); 

	left = right + 1;
	right = studentData.find(",", left);
	int age = stoi(studentData.substr(left, right - left)); 

	left = right + 1;
	right = studentData.find(",", left);
	int day1 = stoi(studentData.substr(left, right - left)); 

	left = right + 1;
	right = studentData.find(",", left);
	int day2 = stoi(studentData.substr(left, right - left)); 

	left = right + 1;
	right = studentData.find(",", left);
	int day3 = stoi(studentData.substr(left, right - left)); 

	left = right + 1;
	right = studentData.find(",", left);
	string degree = studentData.substr(left, right - left); 

	if (degree[2] == 'T') dp = NETWORK;
	if (degree[2] == 'C') dp = SECURITY;
	if (degree[2] == 'F') dp = SOFTWARE;




	add(sID, fname, lname, email, age, day1, day2, day3, dp);

}

void Roster::add(string studentID, string firstName, string lastName, string email,
	int age, int numberOfDaysToComplete3Courses1, int numberOfDaysToComplete3Courses2, int numberOfDaysToComplete3Courses3, DegreeProgram degreeprogram) {

	int daysArray[3] = { numberOfDaysToComplete3Courses1, numberOfDaysToComplete3Courses2, numberOfDaysToComplete3Courses3 };

	classRosterArray[++lastIndex] = new Student(studentID, firstName, lastName, email, age, daysArray, degreeprogram);

}

void Roster::printAll() {

	
	for (int i = 0; i <= Roster::lastIndex; i++) {

		cout << classRosterArray[i]->getStudentID(); cout << '\t';
		cout << classRosterArray[i]->getFirstName(); cout << '\t';
		cout << classRosterArray[i]->getLastName(); cout << ' ';
		cout << classRosterArray[i]->getAge(); cout << '\t';
		cout << "{"<< classRosterArray[i]->getDaysToComplete3Courses()[0]; cout << ' ';
		cout << classRosterArray[i]->getDaysToComplete3Courses()[1]; cout << ' ';
		cout << classRosterArray[i]->getDaysToComplete3Courses()[2]<< "}"; cout << ' ';
		cout << degreeTypeStrings[classRosterArray[i]->getDegreeProgram()] << endl;


	}

}

void Roster::printByDegreeProgram(DegreeProgram degreeprog) {

	Student::printHeader();

	for (int i = 0; i <= Roster::lastIndex; i++) {
		if (Roster::classRosterArray[i]->getDegreeProgram() == degreeprog)  classRosterArray[i]->print();
	}
	cout << endl;
}

void Roster::printInvalidEmails() {
	for (int i = 0; i <= lastIndex; ++i) {
		string email = classRosterArray[i]->getEmail();
		if ((email.find("@") == string::npos) || (email.find(" ") != string::npos) || (email.find(".") == string::npos)) {

			cout << email << "- is invalid. " << endl;

		}
	}
}

void Roster::printAverageDaysInCourse(string studentID) {

	for (int i = 0; i <= lastIndex; ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << "Student ID: " << studentID << ", average days in course is: ";
			cout << (classRosterArray[i]->getDaysToComplete3Courses()[0] + classRosterArray[i]->getDaysToComplete3Courses()[1]
				+ classRosterArray[i]->getDaysToComplete3Courses()[2]) / 3 << endl;
		}
	}
}



void Roster::remove(string studentID) {
	bool found = false;
	for (int i = 0; i <= Roster::lastIndex; i++) {

		if (classRosterArray[i]->getStudentID() == studentID) {

			found = true;
			if (i < numStudents - 1) {

				Student* tempvar = classRosterArray[i]; 
				classRosterArray[i] = classRosterArray[numStudents - 1];
				classRosterArray[numStudents - 1] = tempvar;

			}
			Roster::lastIndex--;
		}
	}

	if (found) {

		cout << studentID << ": Removed from Roster." << endl << endl;
		this->printAll();
	}
	else {
		cout << studentID << " ID NOT FOUND " << endl << endl;
	}
}



Roster::~Roster() {

	cout << "Destroying roster:   " << endl << endl;

	for (int i = 0; i < numStudents; i++)
	{

		cout << "destroying entry #" << i + 1 << endl;
		delete classRosterArray[i];
		classRosterArray[i] = nullptr;

	}
}
