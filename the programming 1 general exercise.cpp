#include<iostream>
#include<string>
using namespace std;
struct employee
{
	int eno;
	string ename;
	string job;
	float salary;
	float bonus;
};
void accept_set_salary(employee arr[],int size);
void set_bonus(employee arr[], int size);
void display_employees(employee arr[],int size);
int main()
{
	employee arr[5];
	accept_set_salary(arr,5);
	set_bonus(arr,5);
	display_employees(arr,5);
	
	
}
void accept_set_salary(employee arr[],int size)
{
	for(int i=0; i<size;i++)
	{
	cout<<"enter the name of employee no"<<i+1<<" \n";
	cin>>arr[i].ename;
	cout<<"enter the job of employee no"<<i+1<<" \n";
	cin>>arr[i].job;
	arr[i].eno=i+1;
	int x;
	if(arr[i].job=="manager")
       arr[i].salary=5000;
	else if(arr[i].job=="engineer")
		arr[i].salary=3000;
	else if(arr[i].job=="clerck")
		arr[i].salary=2000;
	else
	arr[i].salary=1000;
	
	}
	
}


void set_bonus(employee arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i].job=="manager")
		{
			arr[i].bonus=arr[i].salary*0.1;
		}
	}
}

void display_employees(employee arr[],int size)
{
	cout<<"emploee no\temployee name\temployeejob\temployee salary\t\temployeebonous \n";
    	for(int i=0;i<size;i++)
    	{
		cout<< arr[i].eno<<"\t\t";
		cout<< arr[i].ename<<"\t\t";
		cout<< arr[i].job<<"\t\t";
		cout<< arr[i].salary<<"\t\t\t";
		cout<< arr[i].bonus<<"\t\t";
		cout<<"\n";
	   }
	   
	
}


