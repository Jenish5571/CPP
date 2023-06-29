#include<iostream>
using namespace std;

class customer 
{
	private :
		int id;
		string name;
		int age;
		string city;
		int moblie_number;
		int simcard_validity;
		string telecom_brand_name;
		
	public :
		void setData(int id,string name,int age,string city,int moblie_number,int simcard_validity,string telecom_brand_name)	
		{
			this->id  =id;
			this->name=name;
			this->age=age;
			this->city=city;
			this->moblie_number=moblie_number;
			this->simcard_validity=simcard_validity;
			this->telecom_brand_name=telecom_brand_name;
		}
		void getData()
		{
			cout << "id :\t\t\t" << id << endl
				 << "name :\t\t\t" << name << endl
				 << "age :\t\t\t"  << age << endl
				 << "city :\t\t\t" << city << endl
				 << "moblie_number :\t\t" << moblie_number << endl
				 << "simcard_validity :\t" << simcard_validity << endl
				 << "telecom_brand_name :\t" << telecom_brand_name << endl;
				 
		}
};

int main()
{
	customer c1,c2,c3,c4,c5;
	
	c1.setData(101,"jenish",18,"surat",1234567892,5,"jio\n******************************************");
	c2.setData(102,"ashu",18,"surat",1234567892,5,"vi\n******************************************");
	c3.setData(103,"man",18,"surat",1234567892,5,"airtel\n******************************************");
	c4.setData(104,"het",18,"surat",1234567892,5,"jio\n******************************************");
	c5.setData(105,"fenil",18,"surat",1234567892,5,"vi\n******************************************");
	
	c1.getData();
	c2.getData();
	c3.getData();
	c4.getData();
	c5.getData();
}
