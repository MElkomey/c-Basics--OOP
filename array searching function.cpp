#include<iostream>
using namespace std;
//array searching function
bool find_item(int arr[],int size ,int searched_item);
int main()
{
	int x;
	int items[]={10,20,30,40,50};
	cout<<"enter your searched number\n";
	cin>>x;
    if	(find_item(items,5,x))
    cout<<"found\n";
    else
    cout<<"not found";
}
bool find_item(int arr[],int size,int searched_item)
{
	bool status=false;
	for(int i=0;i<size;i++)
	 if(arr[i]==searched_item)
	     return true;
	     
	return status;
}
