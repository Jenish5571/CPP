#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Enter your age : ";
	cin  >> a;
	
	try
	{
		if(a<=18)
		{
			throw 0;
		}
		else
		{
			cout << "Eligible for vote " << endl;
		}
	}
	catch(int n)
	{
		cout << "Not Eligible for vote " << endl;
	}

	cout << "THE END !!" << endl;
}










