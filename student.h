#ifndef _STUDENT_H
#define _STUDENT_H
#include <iostream>
#include<string>
#include<vector>
using namespace std;

class student
{
private: 
string first;
string last;
vector<double> gradeBook;

public:
student();
string fullName();
void setName(string first, string last);
void addGrade(double);
double getScore();
};

#endif
