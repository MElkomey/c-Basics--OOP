
#include<string>
using namespace std;
class car{
	private:
		string maker;
		int model;
	public:
		car(string m,int mo);
		car();
		~car();
	    void setMaker(string m);
		void setModel(int m);
		string getMaker();
		int getModel();		
};

