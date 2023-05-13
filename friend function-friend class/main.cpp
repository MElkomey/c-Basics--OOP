#include <iostream>
#include <string>
using namespace std;
class Person{
	private:
		string name;
		int age;
	public:
	Person(string n,int ag):name(n),age(ag){}
	//friend void print(Person p);	
	friend class Student;
};
class Student
{
	public:
	static	void print(Person p){
	cout<<"name is "<<p.name<<"  age is "<<p.age;	
	}
};
// friend function
//void print_basic_information(Person p){
//	cout<<"name is "<<p.name<<"  age is "<<p.age;
//}

int main() {
	Person z("Ahmed",30);
	//print(z);
	Student s1;
	s1.print(z);
	
	return 0;
}
