#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
	public:
		string fname;
		string lname;
		int age;
		
	
	public:
		Person();
		Person(string f,string l,int ag);
		~Person();
		void set_fname(string f);
		void set_lname(string l);
		void set_age(int ag);
		string get_fname();
		string get_lname();
		int get_age();
};

#endif
