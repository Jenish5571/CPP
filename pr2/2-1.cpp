#include<iostream>
using namespace std;

class Railway
{
	private:
		int  trainnumber;
		string trainname;
		int source;
		int destination;
		int time;
		
    public :
    	
     	railway()
     	{
     		cout << "trainnumber:\t" << trainnumber << endl;
     		cout << "trainnumber:\t" << trainnumber << endl;
     		cout << "source:\t"      << source      << endl;
     		cout << "destination:\t" << destination << endl;
     		cout << "time:\t"        << time        << endl;
		}
		
		void setdata(int trainnumber)
		
		{
			this->trainnumber=trainnumber;
			cout<<"enter trainnuber :\t"<<trainnumber<<endl;
			
		}
		void getdata(int trainnumber)
		{
			if(this->trainnumber=trainnumber)
			{
				cout<<"trainnumber :\t"<<trainnumber<<endl;	
			}
			else
        	{
        		cout<<"this data is notreservation" << endl;
			}
      	}
};

int main()
{
	Railway r;
	r.setdata(trainnumber);
	r.getdata(trainnumber);
}
