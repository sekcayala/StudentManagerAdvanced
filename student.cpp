#include "student.h"
#include<vector>
#include<iostream>
#include <string>

student::student(){ 
  first = " ";
  last = " ";
}

void student::setName(string f, string l)
{
first=f;
last=l;
}

string student::fullName()
{
return first + " " + last;
}

void student::addGrade(double grade)
{
gradeBook.push_back(grade);
}

double student::getScore()
{
double score = 0.0;
for (int i=0; i<gradeBook.size(); i++)
    {
      score = score + gradeBook[i];
    }
  if(gradeBook.size() > 0)
    {
      score = score/gradeBook.size();
    }
  return score;
}
