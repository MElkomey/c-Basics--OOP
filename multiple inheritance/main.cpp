#include <iostream>
#include<string>
using namespace std;

class Employee{
	private:
		string job;
		int salary;
		public:
			void set_job(string j){
				job=j;
			}
			Employee(string j,int s):job(j),salary(s){}
			~Employee(){}
			void display(){
				cout<<"job is: "<<job<<" slaray is: "<<salary<<"\n";
			}
};

class Student{
	private:
		float gpa;
		int level;
		public:
			Student(float gp,int l):gpa(gp),level(l){}
			~Student(){}
			void display(){
				cout<<"GPA is: "<<gpa<<" level is: "<<level<<"\n";
			}
			
};
class TeacherAssistant : public Employee,Student
{
	private:
		string high_studies;
		public:
			TeacherAssistant(string j,int s,float gp,int l,string st):Student(gp,l),Employee(j,s)
			{
				high_studies=st;
			}
			~TeacherAssistant(){}
			void display(){
				Student::display();
				Employee::display();
				cout<<"Specialist in: "<<high_studies<<"\n";
			}
			
};




int main() {
	TeacherAssistant t("assistant",5000,3.5f,2,"databases");
	t.display();
	//choose the class and funcs
	t.Employee::display();
	
	
	return 0;
}
