#include<iostream>
using namespace std;

class employee
{
	private:
			int      id;
			string   name;
			string   email;
			int      salary;
			string   role;
			int      age;
			string   city;
			int      experience;
	public:
			void input()
			{
				cout << "enter id\t :";
				cin  >> id;
				cout << "enter name\t :";
				cin  >> name;
				cout << "enter email\t :";
				cin  >> email;
				cout << "enter salary\t :";
				cin  >> salary;
				cout << "enter role\t :";
				cin  >> role;
				cout << "enter age\t :";
				cin  >> age;
				cout << "enter city\t :";
				cin  >> city;
				cout << "enter experience:";
				cin  >> experience;	
			}
			void output()
			{
				cout << "id :\t" << id << endl;
				cout << "name :\t"<< name<< endl;
				cout << "email :\t"<< email<< endl;
				cout << "salary :\t"<< salary<< endl;
				cout << "role :\t"<< role<< endl;
				cout << "age :\t" << age<< endl;
				cout << "city :\t"<<city << endl;
				cout << "experience :\t"<< experience<< endl;
			}
		
};
int main()
{
	employee e1;
	
	e1.input();
	e1.output();
}









