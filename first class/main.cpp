#include <iostream>
#include "car.h"
using namespace std;

int main() {
	car c1("honda",2021);
	cout<<c1.getMaker()<<"\n";
	cout<<c1.getModel()<<endl;


	return 0;
}
