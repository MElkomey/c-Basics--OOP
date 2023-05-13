#include <iostream>
#include "Calculator.h"
using namespace std;


int main() 
{
    Calculator c1;
		cout<< "the number of objects now =" << c1.getCount()<<"\n";
	Calculator c2;
	cout<< "the number of objects now =" << c2.getCount()<<"\n";
	Calculator c3;
	cout<< "the number of objects now =" <<c3.getCount()<<"\n";

cout<< Calculator::add(1,5)<<"\n";



}
