#ifndef ROSTER_H
#define ROSTER_H
#include "student.h"

class Roster
{
   public:
      Roster();
   private:
      const int NUM_STUDENTS = 5;
      string studentData[5] = {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY","A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK","A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE","A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY","A5,Jared,Clark,helloredfoxes@gmail.com,32, 14, 21, 19,SOFTWARE" };
      Student* classRosterArray = new Student[NUM_STUDENTS];
};

#endif