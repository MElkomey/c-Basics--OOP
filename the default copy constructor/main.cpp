#include <iostream>

using namespace std;
#include "Counter.h"

int main() {
	
	Counter c1(10);
	--c1;
	cout<<c1.getCount()<<"\n";
	return 0;
}
