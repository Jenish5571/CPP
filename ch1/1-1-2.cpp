#include <iostream>
using namespace std;

class Calc_Ebill
{
	int n;
	int cus_Id;
	char cus_Name[50];
	int units;
	double bill_Bal;
	public:
    	void get()
  	   {
      	  	cout << "enter detail of customer : " << endl;
      	  	cin  >>  n;
        	cout << "Enter customer id: " << endl;
        	cin  >>  cus_Id;
        	cout << "Enter customer Name: " << endl;
        	cin  >>  cus_Name;
         	cout << "Enter the number of units : " << endl;
        	cin  >>  units;
    	}
    	void put()
    	{
        	cout << "\nCustomer details :" << endl;
        	cout << "\nCustomer id: " << cus_Id<< endl;
        	cout << "\nCustomer Name: " << cus_Name<<endl;
         	cout << "\nNumber of units: " << bill_Bal<<endl;
        	cin  >>  units;
    	}
};
int main()
{
    cout << "Here your output\n\n" << endl;
    Calc_Ebill b;
    b.get();
    b.put();
}
