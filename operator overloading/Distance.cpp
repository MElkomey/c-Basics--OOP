#include "Distance.h"
#include<iostream>
using namespace std;

Distance::Distance():feet(0),inches(0)
{
}
Distance::Distance(float f, float i):feet(f),inches(i)

{
}


Distance::~Distance()
{
}

void Distance::print()
{
	cout<<"feet ="<<feet<<"\t";
	cout<<"inches="<<inches<<"\n";
}
