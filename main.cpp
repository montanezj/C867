#include "roster.h"





int main() { //OBJECTIVE F. create a main function.
	const string studentData[] =

	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Jason,Montanez,jmon306@wgu.edu,24,30,30,30,SOFTWARE" 


	};

	const int numStudents = 5;
	Roster classRoster;


	
	cout << "C867-Scripting & Programming:Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 001389569" << endl;
	cout << "Name: Jason Montanez" << endl;
	cout << endl;

	for (int i = 0; i < numStudents; i++)
		classRoster.parseData(studentData[i]);
	cout << "Displaying all students:  " << endl;
	classRoster.printAll();
	cout << endl << endl;

	cout << "Displaying invalid emails: " << endl;
	cout << endl;

	classRoster.printInvalidEmails();
	cout << endl;


	classRoster.printAverageDaysInCourse("A1");
	classRoster.printAverageDaysInCourse("A2");
	classRoster.printAverageDaysInCourse("A3");
	classRoster.printAverageDaysInCourse("A4");
	classRoster.printAverageDaysInCourse("A5");
	cout << endl;

	cout << "Showing students in degree program: SOFTWARE" << endl;
	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3"); 

	classRoster.printAll();

	classRoster.remove("A3");


	system("pause");

	return 0;

}


