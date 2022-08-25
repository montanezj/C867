#include "student.h"

Student::Student() {

	this->studID = "";
	this->fName = "";
	this->lName = "";
	this->studEmail = " ";
	this->studAge = 0;
	for (int i = 0; i < days; i++)
		this->numberOfDaysToComplete3Courses[i] = 0;
	this->degreeprogram = DegreeProgram::NETWORK;

}

Student::Student(string studID, string fname, string lname, string email, int age,
	int numberOfDaysToComplete3Courses[], DegreeProgram degreeprog) {

	this->studID = studID;
	this->fName = fname;
	this->lName = lname;
	this->studEmail = email;
	this->studAge = age;

	for (int i = 0; i < days; i++)
		this->numberOfDaysToComplete3Courses[i] = numberOfDaysToComplete3Courses[i];
	this->degreeprogram = degreeprog;


}

Student::~Student() {}


string Student::getStudentID() { return this->studID; }
string Student::getFirstName() { return this->fName; }
string Student::getLastName() { return this->lName; }
string Student::getEmail() { return this->studEmail; }
int Student::getAge() { return this->studAge; }
int* Student::getDaysToComplete3Courses() { return this->numberOfDaysToComplete3Courses; }
DegreeProgram  Student::getDegreeProgram() { return this->degreeprogram; }


void  Student::setStudentID(string studID) { this->studID = studID; }
void  Student::setFirstName(string fname) { this->fName = fname; }
void  Student::setLastName(string lname) { this->lName = lname; }
void  Student::setAge(int numAge) { this->studAge = numAge; }
void  Student::setLastNamesetEmail(string email) { this->studEmail = email; }
void  Student::setDaysToComplete3Courses(int numberOfDaysToComplete3Courses[]) {
	for (int i = 0; i < days; i++) this->numberOfDaysToComplete3Courses[i] = numberOfDaysToComplete3Courses[i];
}
void  Student::setDegreeProgram(DegreeProgram degreeprog) { this->degreeprogram = degreeprog; }

void Student::printHeader() { 
}


void Student::print() {
	cout << this->getStudentID() << '\t';
	cout << this->getFirstName() << '\t';
	cout << this->getLastName() << '\t';
	cout << this->getAge() << '\t';
	cout << this->getEmail() << '\t';
	cout << this->getDaysToComplete3Courses()[0] << '\t';
	cout << this->getDaysToComplete3Courses()[1] << '\t';
	cout << this->getDaysToComplete3Courses()[2] << '\t';
	cout << this->getDaysToComplete3Courses()[3] << '\t';
	cout << degreeTypeStrings[this->getDegreeProgram()] << '\n'; 

}
