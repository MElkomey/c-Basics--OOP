#include <iostream>
#include "Calculator.h"
using namespace std;


int main() 
{
	Calculator c1;
	cout<<c1.add(1,1)<<"\n";	
	cout<<c1.add(2.0f,2.0f)<<"\n";	
	cout<<c1.add("mohamed","elkomey");
	cout<<c1.add(1,3,2)<<"\n";	


	return 0;
}
