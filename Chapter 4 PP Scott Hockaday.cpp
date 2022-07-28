/**Student Name: Scott Hockaday

  *Date Completed:

  *Project No. and Page No. in the book:

  *Extra Credit: Yes

  *Project Description: Define a function that will decide if someone can rent an apartment based on the salary he/she makes.
The rent should be at most one-third of the salary. If it is more than one third, the customer’s application will be denied. 

**/
#include <iostream>
#include<cstdlib>
#include <cmath>
#include <string>
using namespace std;

//function declarations
bool CanBuy(double salary, double rent);
bool OnTimePayment(int age);
//bool CanRent(bool CanBuy, bool OnTimePayment);
const double rent = 1200; //constant

int main()
{
	//variable declaration and initialization
	int userSalary;
	int userAge;
	char userChoice;
	string firstName, lastName;
	
	//do-while loop to ask user to enter correct information
	do
	{
		//prompt and get user input
		cout << "Hello. Welcome to the Renting Evolution Center... " << endl << endl;
		cout << "This apartment's monthly rent is $1200. " << endl;
		cout << "I need to gather your information to see if you qualify: " << endl;

		cout << "Your full name, please:     ";
		cin >> firstName >> lastName;

		cout << "Your age, please:           ";
		cin >> userAge;

		cout << "Your salary, please:        ";
		cin >> userSalary;
		cout << endl;

		//if-else statement(s)
		if (userAge > 17)
		{
			if (CanBuy(userSalary, rent))
			{
				cout << "Based on the information you have provided, you are qualified. You are old enough and have money." << endl;
			}
			else
			{
				cout << "Based on the information you have provided, you are not qualified. Sorry... Make more money next time.  " << endl;
			}
		}
		else
		{
			cout << "Based on the information you have provided, you are not qualified. Sorry... Get older next time..." << endl;
		}
		//Safety functions
		if (userAge >= 18 && userAge <= 26)
		{
			if (OnTimePayment(userAge))
			{
				cout << "You're risky, but I believe you can pay rent on time. ";
			}
		}
		else if (userAge >= 27 && userAge <= 64)
		{
			if (OnTimePayment(userAge))
			{
				cout << "Since you're a little older, I believe you're a safe customer and will pay rent on time. ";
			}
		}
		else if (userAge >= 65)
		{
			if (OnTimePayment(userAge))
			{
				cout << "Since you're a little old, I definitely believe you'll be safe and pay rent on time. ";
			}
		}
		cout << endl;
		//Ask user if he/she wants to enter new information if program doesn't continue
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Would you like to enter new information?: ";
		cin >> userChoice;
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << endl;

	} while (userChoice == 'y' || userChoice == 'Y');

	cout << "Goodluck with the house shopping! " << endl;
	//let the DOS window stay
	system("pause");
	return 0;
}
//function definitions
bool CanBuy(double salary, double rent)
{
	if (rent <= ((1.0 / 3.0)* salary))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool OnTimePayment(int age)
{
	if (age >= 18 && age <= 26)
	{
		return true;
	}
	else if (age >= 27 && age <= 64)
	{
		return true;
	}
	else if (age >= 65)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//bool CanRent(bool CanBuy, bool OnTimePayment)
//{
//	if (CanBuy)
//	{
//
//	}
//}