//
//  student.h
//  Class Roster
//
//  Created by Kaylin McCoy on 3/7/23.
//

#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include "degree.h"

using namespace std;

class Student {

private:
    string studentID;
    string firstName;
    string lastName;
    string email;
    int age;
    int daysInCourse[3];
    DegreeProgram degreeProgram;

public:
    // constructors
    Student();
    Student(string studentId, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram);

    // setters
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3);
    void setDegreeProgram(DegreeProgram degreeProgram);

    // getters for each instance field
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int getAge();
    int* getDaysInCourse();
    string getDegreeProgram(DegreeProgram degreeProgram);

    // print methods
    void printStudentID();
    void printFirstName();
    void printLastName();
    void printEmail();
    void printAge();
    void printDaysInCourse();
    void printDegreeProgram();
    void print();

};

#endif
