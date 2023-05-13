#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
	float gpa;
	int level;
	
public:
	void display();
	Student(float gp,	int lvl);
	
};

#endif
