#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;
class Person
{
	private:
		string name;
		int age;
	public:
		Person(string n,int ag);
		~Person();
		void display();

	
};

#endif
