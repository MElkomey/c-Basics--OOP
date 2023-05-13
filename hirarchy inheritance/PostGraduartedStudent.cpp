#include "PostGraduartedStudent.h"
#include<iostream>
using namespace std;

PostGraduartedStudent::PostGraduartedStudent(string n,int ag,int l,float gp,string st):Student(n,ag,l,gp)
{
	high_study=st;
}

PostGraduartedStudent::~PostGraduartedStudent()
{
}
void PostGraduartedStudent::display()
{
	Person::display();
	Student::display();
	cout<<"Studies are :"<< high_study<<"\n";
	
}
