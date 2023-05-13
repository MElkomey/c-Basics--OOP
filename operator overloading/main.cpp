#include <iostream>
#include "Counter.h"
#include "Distance.h"
using namespace std;


int main() {
	//for unary operator  only one operator
	Counter c1(10);
	++c1;
    cout<<c1.get_counter()<<"\n";
    	--c1;
    cout<<c1.get_counter()<<"\n";
       	c1++;
    cout<<c1.get_counter()<<"\n";
        c1--;
    cout<<c1.get_counter()<<"\n";
    
    //for binary operators  2 operands
    Distance d1(100.0,200.0);
     Distance d2(200.0,400.0);
     Distance d3=d1+d2;
     d3.print();

    
    
	
	return 0;
}
