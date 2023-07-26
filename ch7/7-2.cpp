#include<iostream>
using namespace std;

int main()
{
	int a;
	
	cout << "Enter a: ";
	cin >> a;
	
	try
	{
		if(a <= 18)
		{
			throw a;
		}
		else
		{
			cout << "voteing: " << a << endl;
		}
	}
	catch(int n)
	{
		cout << "Can't eligble for vote " << n << endl;
	}
	
	cout << "THE END!!";
}
