#include<iostream>
using namespace std;

class Calculate
{
	public:
		void sum(int a,int b)
		{
			cout << "division of : " << a << "/" << b << "=" << a/b << endl;
		}
		void sum(int a,int b,int c)
		{
			cout << "subtraction of : " << a << "-" << b << "-" << c << "=" << a-b-c << endl;
		}
		void sum(int a,int b,int c,int d)
		{
			cout << "multiplication of : " << a << "*" << b << "*" << c << "*" << d << "=" << a*b*c*d << endl;
		}
		void sum(int a,int b,int c,int d,int e)
		{
			cout << "addition of : " << a << "+" << b << "+" << c << "+" << d << "+" << e  << "=" << a+b+c+d+e << endl;
		}
	
};

int main()
{
	Calculate c;
	
	c.sum(10,5,8,2);
}
