// Name: Joe Herrera
// Class: CS104 Problem Solving Concepts with C++
// Filename: Assignment 2 Program.cpp

#include <iostream>
using namespace std;

void main()
{

	//declare variables

	double vehicle;
	double options;
	double total;
	double tax;

	//inputs and outputs

	cout << "Enter the base vehicle price: ";
	cin >> vehicle;
	cout << "Enter the options price: ";
	cin >> options;
	cout << "Enter the sales tax %: ";
	cin >> tax;
	cout << endl;
	
	//perform calculation

	total = (vehicle + options) + (vehicle + options) * (tax/100);
	
	cout << "Base Vehicle Price: $";
	cout << vehicle;
		cout << endl;

	cout << "Options price: $";
	cout << options;
		cout << endl;

	cout << "Sales tax pct: 6.5%";
		cout << endl;

	cout <<	"Total price of the vehicle is : $";
	cout << total;
		cout << endl;

}
/*
Enter the base vehicle price: 21245
Enter the options price: 3241
Enter the sales tax %: 6.5

Base Vehicle Price: $21245
Options price: $3241
Sales tax pct: 6.5%
Total price of the vehicle is : $26077.6
Press any key to continue . . .
*/