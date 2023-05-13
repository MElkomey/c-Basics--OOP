#include<iostream>
using namespace std;
int larger(int num1,int num2);
int main()
{
	int n1, n2;
	cout<<"Enter two numbers:\n";
	cin>>n1>>n2;
	cout<<"the larger is:"<<larger(n1,n2)<<"\n";
	
}
int larger(int num1,int num2)
{
	int max;
	if(num1>=num2)
	max=num1;
	else
	max=num2;
	
	return max;
}
