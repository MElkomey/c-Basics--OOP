#include<iostream>
using namespace std;
int sum(int x,int y, int Z);
float avg(int x, int y,int z);
void display(int x, float y);
int main()
{
	int i,j,k,x;
	float y;
	cout<<"Enter three numbers:\n";
	cin>>i>>j>>k;
	x =sum(i,j,k);
	y=avg(i,j,k);
	display(x,y);
}
int sum(int x, int y,int z)
{
	return x+y+z;
}
float avg(int x, int y, int z)
{
	return sum(x,y,z)/3;
}
void display(int x,float y)
{
	cout<<"the sum is :"<<x<<"\n";
	cout<<"the avg is :"<<y<<"\n";

}


