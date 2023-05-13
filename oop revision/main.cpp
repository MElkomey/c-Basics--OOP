#include <iostream>
#include<string>
using namespace std;
class Employee{
	
	protected:
		string name;
		int id;
		double salary;
	public:
	Employee():name("unKonwn"),id(0),salary(0.0){}
	~Employee(){}
	Employee(string n,int i,double s):name(n),id(i),salary(s){}
	virtual double get_total_salary()=0;	
	virtual void print(){
		cout<<" Name\tid\tsalary\n";
		cout<<name<<"\t"<<id<<"\t"<<salary<<"\n";
	}
		
};

class Sales:public Employee{
	
	private:
		float gross_sales;
		float committion_rate;
	public:
	Sales(string n,int i,double s,float gs,float cr):Employee(n,i,s)
	{
		gross_sales=gs;
		committion_rate=cr;
		
	}
	void set_gross_sales(float gs){
		gross_sales=gs;
	}	
	void set_committion_rate(float cr)
	{
		committion_rate=cr;
	}
	double get_total_salary(){
		cout<<"total salary is: "<<salary+(gross_sales*committion_rate)<<"\n";
		return salary+(gross_sales*committion_rate);
	}
	void print(){
	Employee::print();
		cout<<"gross salaes is:"<<gross_sales<<"  committion rate is:"<<committion_rate<<"\n";
	}
};

class Engineer:public Employee{
	
	private:
		string speciality;
		int experience;
		int overtime;
		float overtime_hour_rate;
	public:
	Engineer(string n,int i,double s,string spc,int exp,int ovt,float ovtr):Employee(n,i,s)
	{
	speciality=spc;
	experience=exp;
	overtime=ovt;
	overtime_hour_rate=ovtr;
	}
    double get_total_salary(){
    	cout<<"total salary is "<<salary+(overtime*overtime_hour_rate)<<"\n";
    	return salary+(overtime*overtime_hour_rate);
	}

	void print(){
	Employee::print();
		cout<<"special in :"<<speciality<<"  experience is:"<<experience<<"  over time is"<<overtime<<" total salary is"
		<<salary+(overtime*overtime_hour_rate)<<"\n";
	}
};



int main() {
	
	Sales s("ahmed",1,5000.0,1000,.3f);
	Engineer e("eng m",2,30000.0,"specialist in Chemicals",3,3,0.2f);
	Employee* emp_ptr;
	
	emp_ptr=&e;
	emp_ptr->get_total_salary();
	emp_ptr->print();
	
	
	return 0;
}
