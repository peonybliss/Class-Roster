//
//  Roster.h
//  Class Roster
//
//  Created by Kaylin McCoy on 3/7/23.
//

#ifndef Roster_H
#define Roster_H
#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"


using namespace std;


class Roster {

public:

    Roster(); //empty constructor creates roster and initalizes all field to defulat values
//Initialize pointers to object student
Student* classRosterArray[5];
    Roster(int classSize);
    string GetStudentID(int index);
    Roster* roster = new Roster(5);
    Student* parse(string studentData); //parses the strings, creates the student object and adds them to the roster
    void add (string studentID,string firstName,string lastName, string email, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
    void remove(string studentID);
    void printAll();
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram);
    int classSize;
    int ind;
    ~Roster(); //Destructor destroys the repository, releasing request made dynamically
};

#endif
