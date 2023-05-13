#ifndef CALCULATOR_H
#define CALCULATOR_H
#include <string>
using namespace std;

class Calculator
{
	public:
		int add (int num1, int num2);
		int add (int num1, int num2,int num3);
		float add (float num1,float num2);
		 string add(string s1,string s2);

		Calculator();
		~Calculator();
};

#endif
