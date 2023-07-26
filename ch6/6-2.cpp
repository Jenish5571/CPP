#include<iostream>
using namespace std;

class calculate
{
	protected:
			double r,width,height;
	public:
		void setdata(double a, double b)
		{
			r = a;
			width = a;
			height = b;
		}
		virtual double area() = 0;
};

class circle: public calculate
{
	public:
		double area()
		{
			return (3.14 * r * r);
		}
};

class Rectangle: public calculate
{
	public:
		double area()
		{
			return (width * height);
		}
};

class Triangle: public calculate
{
	public:
		double area()
		{
			return (width * height)/2;
		}
};

int main
{
	calculate *Ptr;
	
	circle c;
	Ptr = &c;
	
	Ptr->setdata(20);
	cout << "Area of circleis: " << Ptr->area() << endl;
	
	Rectangle R;
	Ptr = &R;
	
	Ptr->setdata(5,3)
	cout << "Area of rectangle is: " << Ptr->area() << endl;
	
	Triangle T;
	Ptr = &T;
	
	Ptr->setdata(4,6);
	cout << "Area of triangle is: " << Ptr->area() << endl;
	
};
