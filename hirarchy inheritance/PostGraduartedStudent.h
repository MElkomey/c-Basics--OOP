#ifndef POSTGRADUARTEDSTUDENT_H
#define POSTGRADUARTEDSTUDENT_H
#include<iostream>
#include "Student.h"
using namespace std;
class PostGraduartedStudent : public Student
{
	private:
		string high_study;
	public:
		PostGraduartedStudent(string n,int ag,int l,float gp,string st);
		~PostGraduartedStudent();
	void display();
};

#endif
