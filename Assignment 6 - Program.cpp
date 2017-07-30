// Name: Joe Herrera
// Class: CS104 Problem Solving Concepts with C++
// Filename: Assignment 6 Program.cpp

#include <iostream>
#include <string>
using namespace std;

int  calcAvg(int, int, int, int, int); // prototype calculate average
char determineGrade(int); // prototype determine grade

void main()
{
	//declare variables
	char calc;
	int gr1, gr2, gr3, gr4, gr5;
	string name;

	//start of program
	cout << "Do you want to calculate an average test score? ";
	cin >> calc;
	
	//start of loop
	while (calc == 'Y' || calc == 'y')
	{
		cout << "Please enter your first name: ";
		cin >> name;
		cout << endl;
		cout << "Please enter your last name: ";
		cin >> name;
		cout << endl;
		cout << "Please enter the first grade: ";
		cin >> gr1;
		while (gr1 < 0 || gr1 > 100)
		{
			cout << "Please enter a score between 0 and 100." << endl;
			cout << "Please enter the first grade: ";
			cin >> gr1;
		}
		cout << "Your grade is: " << determineGrade(gr1) << endl;
		cout << "Please enter the second grade: ";
		cin >> gr2;
		while (gr2 < 0 || gr2 > 100)
		{
			cout << "Please enter a score between 0 and 100." << endl;
			cout << "Please enter the second grade: ";
			cin >> gr2;
		}
		cout << "Your grade is: " << determineGrade(gr2) << endl;
		cout << "Please enter the third grade: ";
		cin >> gr3;
		while (gr3 < 0 || gr3 > 100)
		{
			cout << "Please enter a score between 0 and 100." << endl;
			cout << "Please enter the third grade: ";
			cin >> gr3;
		}
		cout << "Your grade is: " << determineGrade(gr3) << endl;
		cout << "Please enter the fourth grade: ";
		cin >> gr4;
		while (gr4 < 0 || gr4 > 100)
		{
			cout << "Please enter a score between 0 and 100." << endl;
			cout << "Please enter the fourth grade: ";
			cin >> gr4;
		}
		cout << "Your grade is: " << determineGrade(gr4) << endl;
		cout << "Please enter the fifth grade: ";
		cin >> gr5;
		while (gr5 < 0 || gr5 > 100)
		{
			cout << "Please enter a score between 0 and 100." << endl;
			cout << "Please enter the first grade: ";
			cin >> gr5;
		}
		cout << "Your grade is: " << determineGrade(gr5) << endl;
		cout << endl;

		cout << "Your average test score is: " << calcAvg(gr1, gr2, gr3, gr4, gr5) << endl << endl;
		cout << "Your grade is: " << determineGrade(calcAvg(gr1, gr2, gr3, gr4, gr5)) << endl << endl;
		
		cout << "Do you want to calculate another grade? " << endl;
		cin >> calc;
	} // end of loop

}//end of program

//function calculations

int calcAvg(int gr1, int gr2, int gr3, int gr4, int gr5)
{
	int average;
	
	average = (gr1 + gr2 + gr3 + gr4 + gr5) / 5;

	return average;
}

char determineGrade(int grade)
{
	char letter;

	if (grade >= 90)
	{
		letter = 'A';
	}
	else
	{
		if (grade >= 80)
		{
			letter = 'B';
		}

		else
		{
			if (grade >= 70)
			{
				letter = 'C';
			}

			else
			{
				if (grade >= 60)
				{
					letter = 'D';
				}

				else
					if (grade <=59)
				{
						letter = 'F';
				}
			}
		}
	}
	return letter; 	
}
/*
Do you want to calculate an average test score? Y
Please enter your first name: JOE

Please enter your last name: HERRERA

Please enter the first grade: 100
Your grade is: A
Please enter the second grade: 80
Your grade is: B
Please enter the third grade: 70
Your grade is: C
Please enter the fourth grade: 60
Your grade is: D
Please enter the fifth grade: 50
Your grade is: F

Your average test score is: 72

Your grade is: C

Do you want to calculate another grade? Y

Please enter your first name: Joe

Please enter your last name: Shmoe

Please enter the first grade: 90
Your grade is: A
Please enter the second grade: 80
Your grade is: B
Please enter the third grade: 75
Your grade is: C
Please enter the fourth grade: 65
Your grade is: D
Please enter the fifth grade: 55
Your grade is: F

Your average test score is: 73

Your grade is: C

Do you want to calculate another grade? Y
Please enter your first name: Robert

Please enter your last name: Smith

Please enter the first grade: 300
Please enter a score between 0 and 100.
Please enter the first grade:
*/