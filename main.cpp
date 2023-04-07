//
//  main.cpp
//  Class Roster
//
//  Created by Kaylin McCoy on 3/7/23.
//

#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"
#include <string>
#include <array>
using namespace std;



int main()

{
    
    
    cout << "C867 - Scripting and Programming: Applications" << endl;
    cout << "Laugauge: C++" << endl;
    cout << "Student ID: 009944696" << endl;
    cout << "Kaylin McCoy" << endl;

    const string studentData[5] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Kaylin,McCoy,kmcc559@wgu.edu,29,15,25,30,SOFTWARE"
    };
   


//Roster class
Roster classRoster;
for (int i = 0; i < 5; i++)
{
    classRoster.parse (studentData[i]);
    
};

//Functions
classRoster.printAll();
cout << endl;

//classRoster.printInvalidEmails();
//for (int i = 0; i < 5; i++)
//
//{
//
//classRoster.printAverageDaysInCourse(classRoster.GetStudentID(i));
//
//}
//cout << endl;
//
////print students with Software Degree
//    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
//cout << endl;
//
////Removing Student A3
//classRoster.remove("A3");
//cout << endl;
//
////Printing new class roster
//classRoster.printAll();
//cout << endl;
//
////Test removing student A3 should output error
//classRoster.remove("A3");
//cout << endl;

    return 0;

}
