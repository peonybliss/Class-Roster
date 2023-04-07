//
//  roster.cpp
//  Class Roster
//
//  Created by Kaylin McCoy on 3/7/23.
//



#include "roster.h"
#include <iostream>

using namespace std;

// Constructor
Roster::Roster(int classSize)
{
    this->classSize = classSize;
    this->ind = 0;
    
    // Allocate memory for each student in the class roster
    for (int i = 0; i < classSize; i++) {
        this->classRosterArray[i] = new Student();
    }
}

// Parse student data and return a new Student object
Student* Roster::parse(string studentData)
{
    // Split the student data by commas
    size_t rhs = studentData.find(",");
    string studentID = studentData.substr(0, rhs);
    
    size_t lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string firstName = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string lastName = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    string email = studentData.substr(lhs, rhs - lhs);
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    int age = stoi(studentData.substr(lhs, rhs - lhs));
    
    // Store the three values for the number of days a student has taken to complete three courses
    int daysInCourse[3];
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    daysInCourse[0] = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    daysInCourse[1] = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.find(",", lhs);
    daysInCourse[2] = stoi(studentData.substr(lhs, rhs - lhs));
    
    lhs = rhs + 1;
    rhs = studentData.length();
    string degreeProgramString = studentData.substr(lhs, rhs - lhs);
    
    DegreeProgram degreeProgram = DegreeProgram::SOFTWARE;
    if (degreeProgramString == "SECURITY") {
        degreeProgram = DegreeProgram::SECURITY;
    }
    else if (degreeProgramString == "NETWORK") {
        degreeProgram = DegreeProgram::NETWORK;
    }
    
    // Create a new student object with the parsed data and return it
    return new Student(studentID, firstName, lastName, email, age, daysInCourse, degreeProgram);
}

// Add a new student to the class roster
void Roster::parse(string studentData)
{
     Student* student = parse(studentData);
    
    // Find the first empty slot in the class roster array and add the new student there
    for (int i = 0; i < classSize; i++) {
        if (classRosterArray[i] == nullptr) {
            classRosterArray[i] = student;
            ind++;
            return;
        }
    }
    
    // If there are no empty slots in the class roster array, display an error message and delete the new student object
    cout << "Error: class roster is full, cannot add new student." << endl;
    delete student;
}

// Remove a student from the class roster
void Roster::remove(string studentID)
{
    bool foundStudent = false;
    for (int i = 0; i < classSize; i++)
    {
        if (classRosterArray[i] != nullptr && classRosterArray[i]->getStudentID() == studentID)
            }
}
