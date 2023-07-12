#include<iostream>
using namespace std;

class P
{
	protected:
		double t;
		double j;
		double k;
		
	public:
		void setData()
		{
			cout << "enter temperature: ";
			cin  >> t;
		}	
};
class Q : public P
{
	public:
		void getk()
		{
			j = ( (t*9)/5 ) + 32;
			cout << "fehrenheit: " << j;
			cout << "\n";
		}
	
};
class R : public Q
{
	public:
		void geta()
		{
			k = t + 273.15;
			cout << "kelvin: " << k;
		}
};
int main()
{
	R r1;
	r1.setData();
	r1.getk();
	r1.geta();
}

