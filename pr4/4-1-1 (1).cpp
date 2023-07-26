#include<iostream>
using namespace std;

class Message
{
	private:
		string name;
	public:
		Message(){}
		Message(string name)
		{
			this->name=name;
			cout << " " << name << endl;
		}
		void getData()
		{
			cout << "name :" << name << endl;
		}
};
class A : public Message
{
	public:
		void print(int a,int b)
		{
			cout << "sum of " << a << "+" << b << "=" << a+b << endl;
		}
		void print(int a,int b,int c)
		{
			cout << "sum of " << a << "+" << b << "+" << c << "=" << a+b+c << endl;
		}
};
int main()
{
	Message m;

	m.getData();
}