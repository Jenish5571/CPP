#include <iostream>
using namespace std;
 
class calculate
{
  	protected:
    	double r,width, height;
 	public:
    	void setData (double a, double b,double c)
	    {
	    	r = a;
	        width = b;
	        height = c;
	        
	    }
	    virtual double area() = 0;
};

class Circle: public calculate
{
	public:
	    double area ()
	    {
	        return (3.14 * r * r);
	    }
};
 
class Rectangle: public calculate
{
	public:
	    double area ()
	    {
	        return (width * height);
	    }
};
 
class Triangle: public calculate
{
	public:
	    double area ()
	    {
	        return (width * height)/2;
	    }
};
 
int main ()
{
    calculate *Ptr;
    
    Circle C;
    Ptr = &C;
    
    Ptr -> setData(5);
    cout << "Area of Circle " << Ptr -> area() << endl;
	
    Rectangle R;
    Ptr = &R;
    
    Ptr -> setData (5,3);
    cout << "Area of Rectangle :" << Ptr -> area() << endl;
 
    Triangle T;
    Ptr = &T;
 
    Ptr -> setData (4,6);
    cout << "Area of Triangle :" << Ptr -> area() << endl;	
 
}




