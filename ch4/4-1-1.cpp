#include<iostream>
using namespace std;

class x
{
	protected:
		int a,b,c,sum;
		
};

class y : protected x
{
	public:
		setData()
		{
			cout << "enter a: ";
			cin  >> a;
			cout << "enter b: ";
			cin  >> b;
			cout << "enter c: ";
			cin  >> c;
		}
		getData()
		{
			sum  = (a*a*a)+(b*b*b)+(c*c*c);
			cout << "sum: " << sum;
		}
};
int main()
{
	y y1;
	
	y1.setData();
	y1.getData();
}