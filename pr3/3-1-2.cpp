
#include<iostream>
using namespace std;

class square
{
	protected:
		int a,b;
};

class sqaure : public square
{
	public:
		void getData()
		{
			cout << "enter a:" << a << endl;
			cin >> a;
			
			cout << "square a:" << a*a << endl;	
		}
};
class cude : public square
{
	public :
		void setData()
		{
			cout << "square a:" << a << endl;
		}
		void getData()
		{
			cout << "enter b:" << b << endl;
			cin >> b;
			
			cout << "square b:" << b*b*b << endl;
		}
		
};
int main()
{
	sqaure S;
	S.getData();
	cude C;
	C.getData();
}

