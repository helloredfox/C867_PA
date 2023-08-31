#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"

class Student
{
   public:
	  Student();
	  Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge,int daysToCopmleteEachCourse[3], DegreeProgram degreeProgram);

      string getStudentID();
	  void setStudentID(int studentID);

	  string getFirstName();
	  void setFirstName(string firstName);
	  
	  string getLastName();
	  void setLastName(string lastName);

	  string getEmailAddress();
	  void setEmailAddress(string emailAddress);

	  int getStudentAge();
	  void setStudentAge(int studentAge);

	  int* getDaysToCompleteEachCourse();
	  void setDaysToCompleteEachCourse(int daysToCompleteEachCourse[3]);

	  DegreeProgram getDegreeProgram();
	  void setDegreeProgram(DegreeProgram degreeProgram);

	  void print();

   private:
      string studentID;
	  string firstName;
	  string lastName;
	  string emailAddress;
	  int studentAge;
	  int* daysToCompleteEachCourse;
	  DegreeProgram degreeProgram;

};

#endif