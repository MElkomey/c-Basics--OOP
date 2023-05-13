#include "Student.h"
#include<iostream>
using namespace std;

void Student::display()
{
	cout<<fname<<"\t"<<lname<<"\t"<<gpa<<"\t"<<"\n";
}

Student::Student(float gp,	int lvl){
	gpa=gp;
	level=lvl;
}
