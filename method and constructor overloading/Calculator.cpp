#include "Calculator.h"
#include<string>
#include<iostream>
using namespace std;

int Calculator::add(int num1,int num2)
{
	return num1+num2;
}

int Calculator::add(int num1,int num2,int num3)
{
	return num1+num2+num3;
}
float Calculator::add(float num1,float num2)
{
	return num1+num2;
}
string Calculator::add(string s1,string s2)
{
	return s1+" "+s2;
}

Calculator::Calculator()
{
	cout<<"hi to method overloading\n";
}

Calculator::~Calculator()
{
	cout<<"good bye";
}
