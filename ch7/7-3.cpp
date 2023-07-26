#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Enter password: ";
	cin >> a;
	
	try
	{
		if(a>=65&&a<=90)
		{
			throw 'a';
		}
		else
		{
			cout << "Validated " <<  endl;
		}
	}
	catch(char c)
	{
		cout << " valid " << c << "can't valid"  << endl;
	}
	
	cout << "THE END!!";
}
