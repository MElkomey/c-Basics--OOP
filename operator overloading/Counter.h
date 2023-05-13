#ifndef COUNTER_H
#define COUNTER_H

class Counter
{
	private:
	int	counter;
	public:
		Counter();
		Counter(int c);
		int get_counter();
		~Counter();
		Counter operator ++()
		{
			++counter;
			return Counter(counter);
		}
			Counter operator ++(int)
		{
			counter++;
			return Counter(counter);
		}
			Counter operator --()
		{
			--counter;
			return Counter(counter);
		}
			Counter operator --(int)
		{
			counter--;
			return Counter(counter);
		}
	
};

#endif
