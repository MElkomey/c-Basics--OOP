#include "Student.h"
#include "Person.h"

Student::Student(string n,int ag,int l,float gp):Person(n,ag)
{
	level=l;
	gpa=ag;
}

Student::~Student()
{
}
