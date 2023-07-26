#include<iostream>
using namespace std;

class Demo
{
	private:
		int a,b;
		
	public:
		void setData()
		{
			cout << "Enter a and b : ";
			cin  >> a >> b;
		}
		void getData()
		{
			try
			{
				if(b==0)
				{
					throw b;
				}
				else
				{
					cout << "Division: " << a/b << endl;
				}
			}
			catch(int n)
			{
				cout << "can't devide by " << n << endl;
			}
			catch(char c)
			{
				cout << "raviable" << c << "can't be ZERO " << endl; 
			}
			catch(...)
			{
				cout << "general exception!!" << endl;
			}
			cout << "THE END" << endl;
		}
		
};

int main()
{
	Demo d1;
	
	d1.setData();
	d1.getData();
}


