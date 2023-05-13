#include<iostream>
using namespace std;
int main()
{
	float x,y;
	char z,q;
	a:
cout<<"Enter the first number\n";
cin>>x;
cout<<"Enter the second number\n";
cin>>y;
cout<<"Enter the operation (* , / , + , - , % )\n";
cin>>z;

switch (z)
{
	case '*':
		cout<<x<<z<<y<<"="<<x*y<<"\n";
		cout<<"y to continue \n";
		cin>>q;
		if(q== 'y')
		   goto a;
		break;
	case '/':
		cout<<x<<z<<y<<"="<<x/y<<"\n";
		cout<<"y to continue \n";
		cin>>q;
		if(q== 'y')
		   goto a;
		break;
	case '+':
		cout<<x<<z<<y<<"="<<x+y<<"\n";
		cout<<"y to continue \n";
		cin>>q;
		if(q== 'y')
		   goto a;
		break;
	case '-':
		cout<<x<<z<<y<<"="<<x-y<<"\n";
		cout<<"y to continue \n";
		cin>>q;
		if(q== 'y')
		   goto a;
    	break;
	case '%':
		cout<<x<<z<<y<<"="<<(int)x%(int)y<<"\n";
		cout<<"y to continue\n ";
		cin>>q;
		if(q== 'y')
		   goto a;
    	break;
	default:
		cout<<" No such operation\n";
		cout<<"y to continue \n";
		cin>>q;
		if(q== 'y')
		   goto a;
		break;
			
}

return 0;
}
