
//
//  student.cpp
//  Class Roster
//
//  Created by Kaylin McCoy on 3/7/23.
//



#include "student.h"
using namespace std;

Student::Student() //Empty constructor will set all to default values
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = 0;
    this->daysInCourse[0] = 0;
    this->daysInCourse[1] = 0;
    this->daysInCourse[2] = 0;
    this->degreeProgram;
    }



Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
    this->degreeProgram = degreeProgram;
    
    }


//setters
void Student::setStudentID(string StudentID)
{
    this->studentID = StudentID;
}

void Student::setFirstName(string First)
{
    this->firstName = First;
}

void Student::setLastName(string Last)
{
    this->lastName = Last;
}

void Student::setEmail(string Email)
{
    this->email = Email;
}

void Student::setAge(int age)
{
    this->age = age;
}

void Student::setDaysInCourse(int daysInCourse1, int daysInCourse2, int daysInCourse3)
{
    for (int i = 0; i < 3; i++)
        this->daysInCourse[0] = daysInCourse1;
        this->daysInCourse[1] = daysInCourse2;
        this->daysInCourse[2] = daysInCourse3;
    }

    void Student::setDegreeProgram(DegreeProgram degreeprogram)
    {
        this->degreeProgram = degreeprogram;
    }
    
    //getters
    string Student::getStudentID()
    {
        return studentID;
    }

    string Student::getFirstName()
    {
        return firstName;
    }

    string Student::getLastName()
    {
        return lastName;
    }

    string Student::getEmail()
    {
        return email;
    }

    int Student::getAge()
    {
        return age;
    }

    int* Student::getDaysInCourse()
    {
        return daysInCourse;
    }

    DegreeProgram Student::getDegreeProgram()
    {
        return degreeProgram;
    }
    
    



void Student::print()


