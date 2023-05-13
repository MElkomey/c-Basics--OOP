#include<iostream>
using namespace std;
int main()
{
	int x=10;
	for(int line=1;line<=x+1;line++)
	{
		for(int space=x;space>=line;space--)
		{
			
			cout<<" ";
		} 
		if(line==1){
			cout<<"*";
		}else{
			int i=1;
			for(int stars=3;stars<=line+i;stars++)
			{
			   cout<<"*";
			   for(; i<=line;i++){}
			}
				
			}
		cout<<"\n";
	}
		
	for(int line=x-3;line<=x+1;line++)
	{
		for(int space=x;space>=line;space--)
		{
			
			cout<<" ";
		} 
		if(line==1){
			cout<<"*";
		}else{
			int i=1;
			for(int stars=3;stars<=line+i;stars++)
			{
			   cout<<"*";
			   for(; i<=line;i++){}
			}
				
			}
		cout<<"\n";
	}
			
	for(int line=x-3;line<=x+1;line++)
	{
		for(int space=x;space>=line;space--)
		{
			
			cout<<" ";
		} 
		if(line==1){
			cout<<"*";
		}else{
			int i=1;
			for(int stars=3;stars<=line+i;stars++)
			{
			   cout<<"*";
			   for(; i<=line;i++){}
			}
				
			}
		cout<<"\n";
	}
	
	for(int i=1;i<=x-2;i++)
	   cout<<"        ***\n";
	
	return 0;
}
