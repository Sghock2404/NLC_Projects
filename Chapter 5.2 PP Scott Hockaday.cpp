/**Student Name: Scott Hockaday

  *Date Completed: 11/03/2018

  *Project No. 2 and Page No. 245 in the book

  *Extra Credit: Yes

  *Project Description: A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed
  by the user's car and the number of miles traveled by the car and will then output the number of miles per gallon the car delivered.
  The program should allow the user to repeat this calculation as often as the user wishes. Define a function to compute the number of
  miles per gallon. The program should use a globally defined constant for the number of liters per gallon. Modify your program so that
  it will take input data for two cars and output the number of miles per gallon delivered by each car. The program will also announce
  which car has the best fuel efficiency (highest number of miles per gallon). Now, add two void functions called userInstruction(); and
  displayResult();.

**/

#include <iostream>
using namespace std;

//constant definition
const double LITERS_PER_GALLON = 0.264179;

//function declarations
double milesPerGallon(double miles1, int liters1, double miles2, int liters2);
void userInstruction();
void displayResult(double miles1, int liters1, double miles2, int liters2);

int main()
{
	//variable declaration and initialization
	int litersOne, litersTwo;
	double milesOne, milesTwo;
	char choiceYN;
	do
	{
		//prompt and get user input for two cars
		userInstruction();
		cout << "Liters: ";
		cin >> litersOne;
		cout << "Miles: ";
		cin >> milesOne;
		cout << endl;

		cout << "Liters: ";
		cin >> litersTwo;
		cout << "Miles: ";
		cin >> milesTwo;
		cout << endl;

		displayResult(milesOne, litersOne, milesTwo, litersTwo);

		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(3);

		double MPG1 = milesPerGallon(milesOne, litersOne, milesTwo, litersTwo);
		double MPG2 = milesPerGallon(milesTwo, litersTwo, milesOne, litersOne);

		if (MPG1 > MPG2)
		{
			cout << "Car one has the best fuel efficiency.\n";
		}
		else if (MPG1 < MPG2)
		{
			cout << "Car two has the best fuel efficiency.\n";
		}
		else if (MPG1 == MPG2)
		{
			cout << "Both cars are equal, unable to determine which car has a better fuel efficiency.\n";
		}
		else if (MPG1 == 0 && MPG2 == 0)
		{
			cout << "Neither of the cars moved. Therefore, unable to determine which one has the better fuel efficiency.\n";
		}
		
		//Ask user if program should be repeated
		cout << "Would you like to run this program again? [y= yes|n= no]: ";
		cin >> choiceYN;
		cout << endl;

		//end loop
	} while (choiceYN == 'Y' || choiceYN == 'y');

	//let the DOS window stay
	system("pause");
	return 0;
}
//function definitions
double milesPerGallon(double miles1, int liters1, double miles2, int liters2) //miles per gallon conversion of both cars
{
	//function call
	double MPG1;
	double MPG2;

	MPG1 = miles1 / (liters1 * LITERS_PER_GALLON);
	MPG2 = miles2 / (liters2 * LITERS_PER_GALLON);

	return MPG1;
	return MPG2;
}
//void function defintions
void userInstruction()
{
	cout << "Please input how many liters of gasoline is in car one and the miles driven. \n";
	cout << "Then enter how many liters of gasoline is in car two and the miles driven as well. \n\n";
}
void displayResult(double miles1, int liters1, double miles2, int liters2)
{

	double MPG1;
	double MPG2;

	MPG1 = miles1 / (liters1 * LITERS_PER_GALLON);
	MPG2 = miles2 / (liters2 * LITERS_PER_GALLON);

	cout << "Car one has " << liters1 << " liters and has driven " << miles1 << " miles. \n" ;
	cout << "Car two has " << liters2 << " liters and has driven " << miles2 << " miles. \n\n";

	cout << "Car one gets " << milesPerGallon(miles1, liters1, miles2, liters2) << " miles per gallon of gas. \n";
	cout << "Car two gets " << milesPerGallon(miles2, liters2, miles1, liters1) << " miles per gallon of gas. \n\n";
}