#include "student.h"
/*Book::Book()/*Parameterless constructor sets to default values*/
/*{
	this->bookID = "";
	this->title = "";
	this->author = "";
	for (int i = 0; i < priceArraySize; i++) this->prices[i] = 0;
	this->bookType = BookType::UNDECIDED;
}

Book::Book(string bookID, string title, string author, double prices[], BookType bookType)
{
	this->bookID = bookID;
	this->title = title;
	this->author = author;
	for (int i = 0; i < priceArraySize; i++) this->prices[i] = prices[i];
	this->bookType = bookType;
}

Book::~Book() {}/*destructor does nothing - the Book class creates nothing dynamically*/
/* Book::getID() { return this->bookID; }
string Book::getTitle() { return this->title; }
string Book::getAuthor() { return this->author; }
double* Book::getPrices() { return this->prices; }//An array name IS a pointer!
BookType Book::getBookType() { return this->bookType; }

void Book::setID(string ID) { this->bookID = ID; }
void Book::setTitle(string title) { this->title = title; }
void Book::setAuthor(string author) { this->author = author; }
void Book::setPrices(double prices[])/*Set each price individually*/
/*{for (int i = 0; i < priceArraySize; i++) this->prices[i] = prices[i];
}
void Book::setBookType(BookType bt) { this->bookType = bt; }

void Book::printHeader()/*Use to print the header*/
/*{
	cout << "Output format: ID|Title|Author|Prices|Type\n";
}

void Book::print()
{
	cout << this->getID() << '\t';/*Using tabe separated output and getters*/
	/*cout << this->getTitle() << '\t';
	cout << this->getAuthor() << '\t';
	cout << this->getPrices()[0] << ',';
	cout << this->getPrices()[1] << ',';
	cout << this->getPrices()[2] << '\t';
	cout << bookTypeStrings[this->getBookType()] << '\n';/*booktype to string*/
//}



Student::Student()
{
	this->studentID = "";
	this->firstName = "";
	this->lastName = "";
	this->email = "";
	this->age[ageSize] = 0;
	for (int i = 0; i < days; i++) this->numberOfDaysToComplete3Courses[i] = 0;
	this->degreeProgram = DegreeProgram::SECURITY;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age[], int numberOfDaysToComplete3Courses[], DegreeProgram degreeProgram)
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	for (int i = 0; i < ageSize; i++) this->age[i] = age[i];
	this->degreeProgram = degreeProgram;
}

Student::~Student() {}

string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmail() { return this->firstName; }
int* Student::getAge() { return this->age; }
int* Student::getDaysToComplete3Courses() { return this->numberOfDaysToComplete3Courses; }
DegreeProgram Student::getDegreeProgram() { return this->degreeProgram;  }

void Student::setStudentID(string ID) { this->studentID = ID; }
void Student::setFirstName(string firstName) { this->firstName = firstName;  }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmail(string email) { this->email = email; }
void Student::setAge(int age[ageSize]) { this->age[ageSize] = age[ageSize]; }
void Student::setDaysToComplete3Courses(int numberOfDaysToComplete3Courses[]) {
	for (int i = 0; i < days; i++) this->numberOfDaysToComplete3Courses[i] = numberOfDaysToComplete3Courses[i];
}

void Student::setDegreeProgram(DegreeProgram dp) { this->degreeProgram = dp; }

void Student::printHeader()
{

	cout << "Outpuut format: ID|First Name|Last Name| Email|Age|Degree Program\n";

}

void Student::print();
{

	cout << this->getStudentID() << '\t';
	cout << this->getFirstName() << '\t';
	cout << this->getLastName() << '\t';
	cout << this->getEmail() << '\t';
	cout << this->getAge()[0] << '\t';
	cout << this->getDaysToComplete3Courses()[0] << ',';
	cout << this->getDaysToComplete3Courses()[1] << ',';
	cout << this->getDaysToComplete3Courses()[2] << '\t';
	cout << degreeTypeStrings[this->getDegreeProgram()] << '\n';

};


