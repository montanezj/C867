#pragma once
#include <iostream>
#include <iomanip>
#include "degree.h"
using std::string;
using std::cout;
//using std::endl;

//class Book
//{
//public:
  //  const static int priceArraySize = 3;
//private:
   // string bookID;
    //string title;
   // string author;
   // double prices[priceArraySize];
   // BookType bookType;
//public:
    //Book(); /*parameterless constructor - sets to default values - you always write this!*/
    //Book(string bookID, string title, string author, double prices[], BookType bookType);/*Full constructor */
   // ~Book(); /*Destructor*/

    /*getters aka accessors*/
    //string getID();
    //string getTitle();
   // string getAuthor();
   // double* getPrices();
    //BookType getBookType();

    /*setters aka mutators*/
    //void setID(string ID);
   // void setTitle(string title);
    //void setAuthor(string author);
    //void setPrices(double prices[]);
    //void setBookType(BookType bt);

    //static void printHeader(); /*displays a header for the data to follow*/

   //void print();/*displays 'this' book's data*/
//};

class Student
{
public:
    const static int days = 3;
    const static int ageSize = 1;
private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age[ageSize];
    int numberOfDaysToComplete3Courses[days];
    DegreeProgram degreeProgram;
public:
    Student();
    Student(string studentID, string firstName, string lastName, string email, int age[], int numberOfDaysToComplete3Courses[], DegreeProgram degreeProgram);
    ~Student();

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int* getAge();
    int* getDaysToComplete3Courses();
    DegreeProgram getDegreeProgram();

    void setStudentID(string ID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age[]);
    void setDaysToComplete3Courses(int numberOfDaysToComplete3Courses[]);
    void setDegreeProgram(DegreeProgram dp);
    static void printHeader();

    void print();
};
