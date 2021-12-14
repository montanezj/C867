#pragma once
#include "student.h"
/*class Repo
{
private:
	int lastIndex = -1;
	const static int numBooks = 5;
	Book* bookRepoArray[numBooks];/*NOT declared dynamicallly*/

/*public:
	/*Note that Repo has no constructor; or DOES IT...?*/
	/*The parse method goes through a set of comma delimited strings and extracts the data of a book*/
	//void parse(string row);
	/*All book data is then passed into add method which creates the Book object and places it in the */
	//void add(string bID,
		//string bTitle,
		//string bAuthor,
		//double bprice1,
		//double bprice2,
		//double bprice3,
		//BookType bt);
	//void printAll(); /*Just calls the print() method in Book class for each book*/
	//void printByBookType(BookType bt);/*Booktype is passed in*/
	//void printInvalidIDs();
	//void printAveragePrices();/*Prints the average price for each book*/
	//void removeBookByID(string bookID);/*Find the book with supplied ID and remove*/
	//~Repo();
//};


class Roster
{
private:
	int lastIndex = -1;
	const static int numStudent = 5;
	Student* classRosterArray[numStudent];

public:
	void parse(string row);
	void add(string sID,
		string fName,
		string lName,
		string email,
		int age,
		int numberOfDaysToComplete3Courses,
		DegreeProgram dp);
	void printAll();
	void printByDegreeProgram(DegreeProgram dp);
	void printInvalidIDs();
	void printAge();
	void removeStudentByID(string studentID);
	~Repo();
};
