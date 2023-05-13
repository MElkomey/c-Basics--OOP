#include "Person.h"
#include <string>
using namespace std;
Person::Person():fname("unKonow"),lname("unKonow"),age(30)
{
}
Person::Person(string f,string l,int ag):fname(f),lname(l),age(ag)
{
}

Person::~Person()
{
}
void Person::set_fname(string f)
{
fname=f;	
}
void Person::set_lname(string l)
{
lname=l;	
}
void Person::set_age(int ag)
{
age=ag;	
}	

string Person::get_fname()
{
	return fname;
}
string Person::get_lname()
{
	return lname;
}

int Person::get_age()
{
	return age;
}

