#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student
{   
public:
    Student();
    Student(string studentID, string firstName, string lastName, string email, int age, int numberOfDaysToComplete3Courses[], DegreeProgram degreeProgram);
    ~Student();

    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getDaysToComplete3Courses();
    DegreeProgram getDegreeProgram();

    void setStudentID(string ID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int ageToSet);
    void setDaysToComplete3Courses(int daysToSet[]);
    void setDegreeProgram(DegreeProgram degreeProgram);

    void print();

    const static int days = 3;

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int numberOfDaysToComplete3Courses[days];
    DegreeProgram degreeProgram;
    int i = 0;
};
