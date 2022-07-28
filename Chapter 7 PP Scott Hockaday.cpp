/**Student Name: Scott Hockaday

  *Date Completed: 11/21/2018

  *Project No. 1 and Page No. 439 in the book

  *Extra Credit: No

  *Project Description: Write a program that lets the user enter the actual and average rainfall for each of the 12 months 
  into an array of doubles. Then, do a calculation to find the over/under rainfall and display a table using tabs and
  newline characters.
  (Over\Under Rainfall = Actual Rainfall - Average Rainfall)

**/

#include <iostream>
#include <string>
using namespace std;

//function declarations
void userInstruction();
void rainfallTable();

//constant declared
const int MONTHS = 12;

//array declarations
string months[MONTHS] = { "Jan.", "Feb.", "Mar.", "Apr.", "May", "June", "July", "Aug.", "Sept.", "Oct.", "Nov.", "Dec." }; //array initializer syntax
double rainfallActual[12];
double rainfallAverage[12];
double rainfallOverUnder[12];
char choiceYN;

int main()
{
	do
	{
		//instruction on program
		userInstruction();

		//get user input for the actual rainfall of the 12 months
		for (int i = 0; i < 12; i++)
		{
			cout << months[i] << ": ";
			cin >> rainfallActual[i];
		}
		cout << endl;

		//get user input for the average rainfall of the 12 months
		for (int i = 0; i < 12; i++)
		{
			cout << months[i] << ": ";
			cin >> rainfallAverage[i];
		}
		cout << endl;
		
		//Display table for actual rainfall, average rainfall, and over\under rainfall
		rainfallTable();

		//Over\Under calculation
		for (int i = 0; i < 12; i++)
		{
			cout << months[i];
			rainfallOverUnder[i] = rainfallActual[i] - rainfallAverage[i];
			cout << "\t\t" << rainfallActual[i] << "\t\t\t" << rainfallAverage[i] << "\t\t\t" << rainfallOverUnder[i];
			cout << endl;
		}
		cout << endl;

		//Ask user if he/she wants to repeat the program
		cout << "Would you like to run the program again? <y=yes n=no>: ";
		cin >> choiceYN;
		cout << endl;

		//end of do-while loop
	} while (choiceYN == 'y' || choiceYN == 'Y');

	//let the DOS window stay
	system("pause");
	return 0;
}
//function definitions
void userInstruction()
{
	cout << "Please enter the actual rainfall (in inches) for the 12 months then the average rainfall" << endl << endl;
}
void rainfallTable()
{
	cout << "\t Actual Rainfall \t Average Rainfall \t Over\\Under Rainfall" << endl;

	//displays number of decimals after number
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
}