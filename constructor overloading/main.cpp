#include <iostream>
#include "car.h"
using namespace std;

int main() {
car c1("honda by hand",1990);
cout<<c1.getMaker()<<"\n";

car c2;
cout<<c2.getMaker()<<"\n";




	return 0;
}
