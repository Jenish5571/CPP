#include<iostream>
using namespace std;

class hotel
{
	private :
		int id;
		string name;
		string hotal_type;
		int rating_star;
		static string city;
		int establish_year;
		int staff_quantity;
		int room_quantity;
		
	public :
		void setData()
		{
			cout << "enter id :";
			cin  >> id;
			cout << "enter name :";
			cin  >> name;
			cout << "enter hotal_type :";
			cin  >> hotal_type;
			cout << "enter rating_star :";
			cin  >> rating_star;
			cout << "enter location :";
			cin  >> city;
			cout << "enter establish_year :";
			cin  >> establish_year;
			cout << "enter staff_quantity :";
			cin  >> staff_quantity;
			cout << "enter room_quantity :";
			cin  >> room_quantity;
		}
		void getData()
		{
			cout << "id\t :" << id  << endl
				 << "name\t :" << name  << endl
				 << "hotal_type\t :" << hotal_type  << endl
				 << "rating_star\t :" << rating_star  << endl
				 << "city\t :" << city  << endl
				 << "establish_year\t :" << establish_year  << endl
				 << "staff_quantity\t :" << staff_quantity  << endl
				 << "room_quantity\t :" << room_quantity << endl;
		}
		void getDataInTable()
		{
			cout << id << "\t" << name << "\t" << hotal_type <<"\t" << rating_star << "\t" << city << "\t" << establish_year << "\t" << staff_quantity << "\t" << room_quantity << endl;
		}
};

string hotel :: city = "location";

int main()
{
	int n;
	
	cout << "enter number of hotal : ";
	cin  >> n;
	
	hotel h[n];
	
	for(int i=0; i<n; i++)
	{
		h[i].setData();
	}
	for(int i=0; i<n; i++)
	{
		h[i].getDataInTable();
	}
}






















