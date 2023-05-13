#include<iostream>
#include<string>
using namespace std;

void issue_ticket(int flight_no, string name);

int main()
{
	string name;
	x:
	cout<<"Enter your name\n";
	cin>>name;
	int flight_no=125;
	issue_ticket(flight_no,name);
	for(int x=0;x<=10;x++)
	cout<<" ";
	for(int i=1;i<=30;i++)
	cout<<"=";
	cout<<"\n";
	goto x;
	
}
void issue_ticket(int flight_no, string name)
{
	static int ticket_no=0;
	cout<<"your flight number is "<<flight_no<<"\n";
	cout<<"your ticket number is "<<++ticket_no<<"\n";
	cout<<"for MR"<<name<<"\n\n\n";

}
