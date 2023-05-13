#include <iostream>
using namespace std;
int main()
{
	int x=0,y=0;
	cout<<"enter two numbers\n";
	cin>>x>>y;
	try{
		if(x<30)
		throw "x exception";
		if(y==0)
		throw (500);
	//	throw exception();
	}
	
	catch(...){
		cout<<"x must be greater than 30 and y musn\'t equal 0"<<endl;
	}
//	catch(const char* msg){
//		cout<<msg<<endl;
//		cout<<"x must be greated than 30";
//	}
//	catch(exception e){
//		cout<<e.what()<<endl;
//	}
//catch(int myNum){
//	cout<<myNum<<"exception"<<endl;
//}
//	cout<<"the program continued";
	return 0;
}
