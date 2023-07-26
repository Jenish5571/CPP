#include<iostream>
using namespace std;

class number
{
	private:
		double a;

	public:
		void setData()
		{
			cout << "Enter A: ";
			cin  >> a;	
		}
	
		number operator<(number A)
		{
			number tmp;
			
			if(a<A.a)
			{
				cout << "SECOND is big";
			}
			else if(a==A.a)
			{
				cout << "BOTH are same ";
			}
			else
			{
				cout << "FIRST is big";
			}
			return tmp;
		}
		
		void getData()
		{
			
		}
};
int main()
{
	number n1,n2,n3;
	
	n1.setData();
	n2.setData();
	
	n3 = n1<n2;
	
	n1.getData();
	n2.getData();
	n3.getData();
	
}