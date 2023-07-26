#include<iostream>
using namespace std;

class cafe
{
	private:
		int id;
		string name;
		string type; 
		int rating;
		string location; 
		int establish_year;
		int staff_quantity;
		
	public:
		cafe(int id,string name,string type,int rating,string location,int establish_year,int staff_quantity)
		{
			cout << "id:\t\t\t " << id << "\n" << "name:\t\t\t " << name << "\n" << "type  :  \t\t " << type  << "\n" << "rating  :\t\t " << rating << "\n" << "location:\t\t " <<  location << "\n" << "establish_year:\t\t " << establish_year << "\n" << "staff_quantity:\t\t " << staff_quantity << "\n" << endl;
		}
		
		
};

int main()
{
	cafe c1(101,"GOOD_STUFF","normal",5,"surat",3,10);
	cafe c2(102,"NESO","normal",5,"surat",4,20);
	cafe c3(103,"FENSTAR","normal",5,"surat",1,530);
	cafe c4(104,"LA_PINO'S","normal",5,"surat",10,40);
	cafe c5(105,"MC'D","normal",5,"surat",12,50);
}











