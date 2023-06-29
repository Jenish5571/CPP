#include<iostream>
using namespace std;

class student 
{
	private :
		int id;
		string name;
		int age;
		string course;
		string city;
		string email;
		string collage;
		
	public :
		void setData(int id,string name,int age,string course,string city,string email,string collage)	
		{
			this->id  =id;
			this->name=name;
			this->age=age;
			this->course=course;
			this->city=city;
			this->email=email;
			this->collage=collage;
		}
		void getData()
		{
			cout << "id :\t\t" << id << endl
				 << "name :\t\t" << name << endl
				 << "age :\t\t"  << age << endl
				 << "course :\t" << course << endl
				 << "city :\t\t" << city << endl
				 << "email :\t\t" << email << endl
				 << "collage :\t" << collage << endl;
				 
		}
};

int main()
{
	student s1,s2,s3,s4,s5;
	
	s1.setData(101,"jenish",18,"fullter","surat","jenishhirapara89@gmail.com","sir kp commerce collage\n******************************************");
	s2.setData(102,"ashu",18,"fullter","surat","ashutagadiya01@gmail.com","sir kp commerce collage\n******************************************");
	s3.setData(103,"man",18,"fullter","surat","manpandiya01@gmail.com","sir kp commerce collage\n******************************************");
	s4.setData(104,"het",18,"fullter","surat","hetvadhani001@gmail.com","sir kp commerce collage\n******************************************");
	s5.setData(105,"fenil",18,"fullter","surat","feniltummer001@gmail.com","sir kp commerce collage\n******************************************");
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
}

















