#include <iostream>
using namespace std;

class Distanc {
	private:
	    int km, meter;
	
	public:
	   
	    void Input()
	    {
	        cout << "Enter km: ";
	        cin  >> km;
	        cout << "Enter meter: ";
	        cin  >> meter;
	    }
	   
	    void Output()
	    {
	        cout << "km:"    << km    << endl;
	        cout << "meter:" << meter << endl;
	    }
	
	    Distanc operator+(Distanc& dist1)
	    {
	        Distanc tem; 
	        tem.meter = meter + dist1.meter;
	        tem.km = km + dist1.km + (tem.meter / 1000);
	        tem.meter = tem.meter % 1000;
	        return tem;
	    }
};

int main()
{
    Distanc D1, D2, D3;

    cout << "Enter first  distanc:" << endl;
    D1.Input();
    cout << endl;

    cout << "Enter second distanc:" << endl;
    D2.Input();
    cout << endl;

    D3 = D1 + D2;

    cout << "Total Distanc:" << endl;
    D3.Output();

    cout << endl;

}