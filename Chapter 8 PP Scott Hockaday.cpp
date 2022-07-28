/**Student Name: Scott Hockaday

  *Date Completed: 12/04/2018

  *Project No. 4 and Page No. 500 in the book

  *Extra Credit: Yes

  *Project Description: Write a program that will read a user's full name, then output the name in a different format.
  Read the full name using ONE getline function and then extract the first name, middle name (if there is any), and 
  last name from the full name. This program must work even if there is no middle name.

**/
#include<iostream>
#include<string>
using namespace std;

void userInstruction();
int main()
{
	//variable declaration and initialization
	string fullName, lastName, period;
	char choiceYN, newLine;
	int space;
	do
	{
		//prompt and get user name input
		userInstruction();
		getline(cin, fullName);
		cout << endl;

		//finds the last(second) space after typing in full name 
		space = fullName.find_last_of(" ");
		lastName = fullName.substr(space + 1);

		//Full name output in different format
		cout << "Here's your name in the following format: Last, First Middle/Middle Initital: \n";
		cout << lastName + ", " + fullName.substr(0, space);
		cout << endl << endl;

		//ask user if he/she wants to repeat the program
		cout << "Would you like to type another name and run this program again? <y=yes | n=no>: ";
		cin >> choiceYN;
		cout << "------------------------------------------------------------------------------------------------------------ \n";
		cin.get(newLine);

	} while (choiceYN == 'Y' || choiceYN == 'y'); //end of do-while loop
	
	//let the DOS window stay
	system("pause");
	return 0;
}
//function definition
void userInstruction()
{
	cout << "Please enter your full name in this format (First, Middle/Middle Initial, Last): ";
}