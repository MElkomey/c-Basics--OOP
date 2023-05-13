#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
using namespace std;

class Calculator
{
	static int count;
	public:
	static	int add (int num1, int num2);
	static	int add (int num1, int num2,int num3);
	static	float add (float num1,float num2);
		 string add(string s1,string s2);
		 int getCount();

		Calculator();
		~Calculator();
};

#endif
