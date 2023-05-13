#include "Student.h"
#include "Person.h"
#include <iostream>
using namespace std;

Student::Student(string n,int ag,int l,float gp):Person(n,ag)
{
	level=l;
	gpa=ag;
}

Student::~Student()
{
}
void Student::display()
{
	Person::display();
	cout<<"level is: "<<level<<"GPA is :"<<gpa<<"\n";
}
