#include "student.h"
#include <iostream>

Student::Student() { };
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int studentAge, int* daysToCopmleteEachCourse, DegreeProgram degreeProgram) {
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->studentAge = studentAge;
	this->daysToCompleteEachCourse = daysToCompleteEachCourse;
	this->degreeProgram = degreeProgram;
}

void Student::print() {
}