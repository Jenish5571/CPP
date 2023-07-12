#include<iostream>
using namespace std;

class A
{
	protected:
		int id;
		string name;
		string role;
		
	public:
		void setData1(int id,string name,string role)
		{
			this->id=id;
			this->name=name;
			this->role=role;
		}
};
class B : public A
{
	protected:
		int salary;
		int experience;
		
	public:
		void setData2(int salary,int experience)
		{
			this->salary=salary;
			this->experience=experience;
		}
};
class C : public B
{
	protected:
		string name;
		string role;
		int salary;
		string comp_name;
		string address;
		
	public:
		void setData3(string comp_name,string address)
		{
			this->comp_name=comp_name;
			this->address=address;
		}
		void getData1()
		{
			cout << "name: " << name << endl
				 << "role: " << role << endl
				 << "salary: "<< salary << endl;
		}
};
class D : public C
{
	protected:
		int id;
		string name;
		string role;
		int salary;
		int experience;
		string comp_name;
		string address;
		string email;
		int contact;
		
	public:
		void setData4(string email,int contact)
		{
			this->email=email;
			this->contact=contact;
		}
		void getData2()
		{
			cout << "id: "        << id 		<< endl
				 << "name: "      << name       << endl
				 << "role: "      << role       << endl
				 << "salary: "    << salary     << endl
				 << "experience: "<< experience << endl
				 << "comp_name: " << comp_name  << endl
				 << "address: "   << address    << endl
				 << "email: "     << email      << endl
				 << "contact: "   << contact    << endl;
		}
};
int main()
{
	D d1;
    d1.setData1();
    d1.setData2();
    d1.setData3();
    d1.getData1();
    d1.setData4();
    d1.getData2();
}







