#include<iostream>
using namespace std;

class daimond
{
	private:
		int	id;
		string name;
		int staff_quantity;
		int revenue;
		int import_raw_diamonds;
		int export_diamonds;
		string CEO_name;
	public:
		daimond(int	id,string name,int staff_quantity,int revenue,int import_raw_diamonds,int export_diamonds,string CEO_name)
		{
			cout << "id:\t\t\t " << id << "\n" << "name:\t\t\t " << name << "\n" << "staff_quantity :  \t" << staff_quantity << "\n" << "revenue :  \t\t" << revenue << "\n" << "import_raw_diamonds:\t " << import_raw_diamonds << "\n" << "export_diamonds:\t " << export_diamonds << "\n" << "CEO_name:\t\t " << CEO_name << "\n" << endl;
		}
		
		
};

int main()
{
	daimond d1(101,"srk",200,10000,250000,5000000,"govinbhai\n***************************************");
	daimond d2(102,"hk",180,20000,260000,5000000,"savjibhai\n***************************************");
	daimond d3(103,"radhe_shaym",160,30000,270000,5000000,"bharatbhai\n***************************************");
	daimond d4(104,"kgk",190,40000,280000,5000000,"vandanbhai\n***************************************");
	daimond d5(105,"shree_krishna",210,50000,290000,5000000,"kalubhai\n***************************************");
	
}













