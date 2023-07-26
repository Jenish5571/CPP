#include <iostream>
using namespace std;

class Distance
{
	private:
		int feet;
		int inches;
	public:
		void set()
		{
			cout << "Enter feet: ";
			cin  >> feet;
			cout << "Enter inches: ";
			cin  >> inches;
		}
		void get()
		{
			cout <<" feet  = "<<feet << endl;
			cout <<" inches= "<<inches<<endl;
		}
		void add(Distance k1, Distance k2)
		{
			feet = k1.feet + k2.feet;
			inches = k1.inches + k2.inches;
			feet = feet + (inches / 12);
			inches = inches % 12;
		}
};
int main()
{
	Distance k1, k2, k3;
	k1.set();
	k2.set();
	k3.add(k1, k2);
	k3.get();
}

