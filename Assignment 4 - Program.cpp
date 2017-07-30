// Name: Joe Herrera
// Class: CS104 Problem Solving Concepts with C++
// Filename: Assignment 3 Program.cpp

#include <iostream>
using namespace std;

void main()
{

	//declare variables
	double vehicle, options, total, tax, v8, interest_rate, term, cntr;
	char v8_flag, region_flag, cont;

	do
	{

	//inputs and outputs
		cout << "Enter the base vehicle price: ";
			cin >> vehicle;
		cout << "Enter the options price: ";
			cin >> options;

	// Prompt the user for the V8 option
		cout << "V8 Option Desired? (Y/N): ";
			cin >> v8_flag;

			if (v8_flag == 'Y')
			{
				cout << "What is the price for the V8 option? ";
					cin >> v8;
			}
			else
			{
				v8 = 0;
			}

	// Prompt the user for region, if region 1 then 6.5% if not then 7.0%
		cout << "Are you located in region 1? (Y/N): ";
			cin >> region_flag;

			if (region_flag == 'Y')
			{
				tax = .065;
			}
			else
			{
				tax = .07;
			}
			cout << endl;

	//perform calculation
			total = (vehicle + options + v8) + (vehicle + options + v8) *tax;

			cout << "Base Vehicle Price: $";
			cout << vehicle;
			cout << endl;

			cout << "Options price: $";
			cout << options;
			cout << endl;

			cout << "Sales Tax: ";
			cout << tax * 100;
			cout << "%";
			cout << endl;

			cout << "Total price of the vehicle is : $";
			cout << total;
			cout << endl; cout << endl; cout << endl;

		// Counter Loop for financing table

			for (int pmtTerm = 60, rate = 8; pmtTerm >= 24;
				pmtTerm -= 12, rate -= 2)
			{
				cout << "Payment Term: " << pmtTerm
					<< "\tInterest Rate: " << rate << "%"
					"\tInterest Charge will be: " << total * (rate / 100.00) << endl;
				cout << endl; cout << endl; 
			}
		
			cout << "Do you want to calculate another price? (Y/N) ";
			cin >> cont;
			cout << endl; cout << endl;

	} 
	while (cont == 'Y');
}

/*
Enter the base vehicle price: 19500
Enter the options price: 3400
V8 Option Desired? (Y/N): N
Are you located in region 1? (Y/N): Y

Base Vehicle Price: $19500
Options price: $3400
Sales Tax: 6.5%
Total price of the vehicle is : $24388.5


Payment Term: 60        Interest Rate: 8%       Interest Charge will be: 1951.08



Payment Term: 48        Interest Rate: 6%       Interest Charge will be: 1463.31



Payment Term: 36        Interest Rate: 4%       Interest Charge will be: 975.54


Payment Term: 24        Interest Rate: 2%       Interest Charge will be: 487.77


Do you want to calculate another price? (Y/N) Y


Enter the base vehicle price: 21000
Enter the options price: 4000
V8 Option Desired? (Y/N): Y
What is the price for the V8 option? 500
Are you located in region 1? (Y/N): Y

Base Vehicle Price: $21000
Options price: $4000
Sales Tax: 6.5%
Total price of the vehicle is : $27157.5


Payment Term: 60        Interest Rate: 8%       Interest Charge will be: 2172.6


Payment Term: 48        Interest Rate: 6%       Interest Charge will be: 1629.45



Payment Term: 36        Interest Rate: 4%       Interest Charge will be: 1086.3


Payment Term: 24        Interest Rate: 2%       Interest Charge will be: 543.15


Do you want to calculate another price? (Y/N) Y


Enter the base vehicle price: 23500
Enter the options price: 4500
V8 Option Desired? (Y/N): Y
What is the price for the V8 option? 550
Are you located in region 1? (Y/N): N

Base Vehicle Price: $23500
Options price: $4500
Sales Tax: 7%
Total price of the vehicle is : $30548.5


Payment Term: 60        Interest Rate: 8%       Interest Charge will be: 2443.88



Payment Term: 48        Interest Rate: 6%       Interest Charge will be: 1832.91



Payment Term: 36        Interest Rate: 4%       Interest Charge will be: 1221.94



Payment Term: 24        Interest Rate: 2%       Interest Charge will be: 610.97


Do you want to calculate another price? (Y/N)
*/