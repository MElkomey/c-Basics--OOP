#include <iostream>
#include"Distance.h"
int main() {

Distance d1(20.0f,30.0f);
Distance d2(50.0f,60.0f);
 Distance d3(d1.add(d2));// or Distance d3= d1.add(d2);
 d3.print();
	return 0;
}
