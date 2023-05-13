#include<iostream>
#include<string>
using namespace std;
struct student
{
	string fname;
	string lname;
	int gpa;
	int marks[3];
};
void display_student(student e);
int main()
{
	student e1;
	e1.fname="mohamed";
	e1.lname="elkomey";
	e1.gpa=4;
	e1.marks[0]=90;
	e1.marks[1]=100;
	e1.marks[2]=200;
	display_student(e1);

	return 0;
}
void display_student(student e)
{
	cout<<e.fname<<" "<<e.lname<<"\n";
	cout<<"gpa is "<<e.gpa<<"\n";
	for (int i=0;i<3;i++)
	{
		cout<< "mark"<<i+1<<"= "<<e.marks[i]<<"\n";
	}
}



