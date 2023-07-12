
#include <iostream>
using namespace std;

class Shape
{
	private:
			double width, height;
			
	public:
			Shape(double newWidth, double newHeight)
			{
				this->width=newWidth;
				this->height=newHeight;
			}
			double getWidth() const
			{
				return width;
			}
			double getHeight() const
			{
				return height;
			}
};

class Rectangle: public Shape
{
	public:
   
    	Rectangle(double width, double height) : Shape(width,height)
    	{ 
    	
    	}
    	double area()
    	{
        return (getWidth()*getHeight());
    	}	
};

class Triangle: public Shape
{
	public:
	    Triangle(double base, double height) : Shape(base,height)
	    {
	
	    }
	    double area()
	    {
	        return (getWidth()*getHeight())/2.0;
	    }
};

int main ()
{
	Rectangle rectangle(4.0,4.0);
	Triangle triangle(2.0,6.0);
	cout << "Area of rectangle is: " << rectangle.area()   << endl;
	cout << "Area of triangle is: "  << triangle.area()    << endl;
}
