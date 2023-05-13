#include<iostream>
using namespace std;
void swap_refrerce(int &x,int &y);
void swap_pointer(int* ptr1,int *ptr2);
int main()
{
	int x=5, y=10;
	int* ptr1= &x;
	int* ptr2= &y;
	
	//swap_refrerce(x,y);
	//swap_pointer(ptr1,ptr2);
	swap_pointer(&x,&y);
	cout<<x<<"\n"<<y;
	
	
	
//	//ordinary array
//	
//	int arr[]={10,20,30,40,50};
//	for(int i=0;i<5;i++)
//	cout<< *(arr+i)<<"\t";
//	
	
	
	
	
	
//	//array of characters
//	char msg[]="hello";
//	char* ptr;
//	ptr=msg;
//	*ptr='s';//make the value of first place =s
//	ptr++;//move to the next place
//	*ptr='a';
//	cout<<msg;
	
	
	
	
	
	
	
	
//	int i=10;
//	int* ptr;
//	ptr=&i;
//	
//	cout<<*ptr;
//	cout<<ptr;
}
void swap_refrerce(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap_pointer(int* ptr1,int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
}



