#include<iostream>.
using namespace std;

class Cricket 
{
	public:
		void getover()
		{
			cout << "Match total Over " << endl;
		}
};

class T20match : public Cricket 
{
	public :
		void T20matchover()
		{
			cout << "t20 Match total Over Is 20 Over " << endl << endl;
		}
};

class Testmatch : public T20match 
{
	public :
		void Testmatchover()
		{
			cout << "t20 Match total Over Is 90 Over " << endl;
		}
};

int main()
{
	T20match t;
	
	t.getover();
	t.T20matchover();
	
	Testmatch a;
	a.getover();
	a.Testmatchover();
}
