#ifndef DISTANCE_H
#define DISTANCE_H

class Distance{

private:
	float feet;
	float inches;

	public:
		Distance();
		Distance(float f,float i);
		~Distance();
		void print();
		Distance operator + (Distance d)
		{
			float f=feet+d.feet;
			float i=inches+d.inches;
			
			return Distance(f,i);
			
		}
			Distance operator - (Distance d)
		{
			float f=feet-d.feet;
			float i=inches-d.inches;
			
			return Distance(f,i);
			
		}

};

#endif
