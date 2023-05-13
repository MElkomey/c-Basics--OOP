#include <string>
#include "car.h"
#include<iostream>
using namespace std;
void car::setModel(int m)
{
	model=m;
}

void car::setMaker(string m)
{
	maker=m;
}

string car::getMaker ()
{
	return maker;
}

int car::getModel ()
{
	return model;
}
car::car(string m,int mo):maker(m),model(mo)
{
//	maker=m;
//	model=mo;
	cout<<"constructor finished\n";
}
car::~car()
{
	cout<<"good bye";
}
