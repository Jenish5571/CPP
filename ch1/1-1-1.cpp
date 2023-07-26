#include <iostream>
using namespace std;

double Meters() 
{
    int meters * 100;
}

double Centimeters() 
{
    int centimeters / 100;
}

double Centimeters() 
{
    int centimeters / 2.54;
}

double Inches() 
{
    inches * 2.54;
}

int main() 
{
    double length;
    int choice;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Choose an option:" << std::endl;
    cout << "1. meters" << std::endl;
    cout << "2. centimeters " << std::endl;
    cout << "3. centimeters" << std::endl;
    cout << "4.  inches" << std::endl;
    cout << "Enter your choice: ";
    cin  >> choice;

    switch (choice) 
	{
        case 1:
            cout << length << " meters " << Meters(length) << " centimeters." << endl;
            break;
        case 2:
            cout << length << " centimeters  " << Centimeters(length) << " meters." << endl;
            break;
        case 3:
            cout << length << " centimeters " << Centimeters(length) << " inches." << endl;
            break;
        case 4:
            cout << length << " inches " << Inches(length) << " centimeters." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

}
