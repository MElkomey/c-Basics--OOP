#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string n,int ag):name(n),age(ag)
{
}

Person::~Person()
{
}

void Person::display(){
	cout<< "name is:"<< name<<"  age is:"<<age;
}

