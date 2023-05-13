#include<iostream>
using namespace std;

int main()
{
	int grade=0, sum=0, count=0;
	
	while (count<6)
	{
		cout<<"enter the grade\n";
		cin>> grade;
		sum+=grade;
		
		count++;
	}
	
	cout<<"the sum is\t "<<sum;
}
