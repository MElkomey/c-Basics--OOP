#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include "Person.h"
using namespace std;
class Student : public Person
{
	private:
		int level;
		float gpa;
	public:
		Student(string n,int ag,int l,float gp);
		~Student();
		void display();

};

#endif
