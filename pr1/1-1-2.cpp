#include <iostream>
using namespace std;

class Time 
{
	private:
    	int seconds;
    	int hh, mm, ss;

	public:
    	void getTime()
    	{
    		cout << "Enter time:" << endl;
    
    		cout << "Hours?   ";
    		cin >> hh;
   
    		cout << "Minutes? ";
    		cin >> mm;
  
    		cout << "Seconds? ";
    		cin >> ss;
		}
    	void Seconds()
		{
   	 		seconds = hh * 3600 + mm * 60 + ss;
		}
    	void displayTime()
		{	
    		cout << " time = " << hh << ":"
         	<< mm << ":"
         	<< ss << endl;
    		cout << "Time in total seconds: " << seconds;
		}
};

int main()
{
    Time t; 
	
    t.getTime();
	t.Seconds();
    t.displayTime();
}
