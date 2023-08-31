#include "roster.h"
#include "degree.h"
#include <iostream>
Roster::Roster() {
   int i;
   string studentID;
   string firstName;
   string lastName;
   string emailAddress;
   int studentAge;
   int daysToCompleteEachCourse[3];
   string degreeProgramString;
   DegreeProgram degreeProgram;
   string delimeter = ",";

   for (i = 0; i < NUM_STUDENTS; ++i) {
	   //parse and store studentID, first and last name, email address, and studen age.
	   studentID = studentData[i].substr(0, studentData[i].find(delimeter));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   firstName = studentData[i].substr(0, studentData[i].find(delimeter));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   lastName = studentData[i].substr(0, studentData[i].find(delimeter));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   emailAddress = studentData[i].substr(0, studentData[i].find(delimeter));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   studentAge = stoi(studentData[i].substr(0, studentData[i].find(delimeter)));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   //next three numbers are the course days array
	   daysToCompleteEachCourse[0] = stoi(studentData[i].substr(0, studentData[i].find(delimeter)));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   daysToCompleteEachCourse[1] = stoi(studentData[i].substr(0, studentData[i].find(delimeter)));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   daysToCompleteEachCourse[2] = stoi(studentData[i].substr(0, studentData[i].find(delimeter)));
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   //get the enum as a string, then change to an enum with the stringToEnum function
	   degreeProgramString = studentData[i].substr(0, studentData[i].find(delimeter));
	   if (degreeProgramString == "SECURITY") {
		   degreeProgram = SECURITY;
	   }
	   if (degreeProgramString == "NETWORK") {
		   degreeProgram = NETWORK;
	   }
	   if (degreeProgramString == "SOFTWARE") {
		   degreeProgram = SOFTWARE;
	   }
	   studentData[i].erase(0, studentData[i].find(delimeter) + delimeter.size());
	   cout << degreeProgramString << endl;
   }
}

int main() {
	Roster roster;



	return 0;
}