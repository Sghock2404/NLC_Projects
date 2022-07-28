/**Student Name: Scott Hockaday
  *Date Completed: 9/24/18
  *Chapter 2 PP: Project No. 5 Page No. 106 in the book
  *Extra Credit: Yes

  *Project Description: Write a program that determines whether a meeting room is in violation of fire law regulations
  regarding the maximum room capacity and the number of people attending the meeting. If the number of people is less than
  or equal to the maximum room capacity, the program announces that it is legal to hold the meeting and tells how many additional
  people may legally attend. If the number of people exceeds the maximum room capacity, the program announces that the meeting
  cannot be held as planned due to fire regulations and tells how many people must be excluded in order to meet the fire regulations.
  For a harder version, write the program so that it allows the calculation to be repeated as often as the user wishes.

**/

#include <iostream>
using namespace std;

int main() {

	//variable declaration and initialization
	int attendNum, attendMax, attendOver;
	int attendCheck = 1;
	char letter;

	//do-while loop
	do
	{
		//prompt and get user input
		cout << "How many people are attending the meeting? ";
		cin >> attendNum;
		cout << "What is the maximum room capacity? ";
		cin >> attendMax;
		cout << endl;

		//if-else statement
		if (attendNum <= attendMax)
		{
			//subtract the two numbers
			attendOver = attendMax - attendNum;

			//display information
			cout << "The room meets the fire law regulations, therefore the meeting can begin. \n";
			cout << "Although, " << attendOver << " additional people may enter the meeting. \n\n ";
		}
		else
		{
			//subtract the two numbers
			attendOver = attendNum - attendMax;

			//display information
			cout << "Sorry. Your meeting doesn't meet the fire law regulations, therefore we can't hold the meeting. \n";
			cout << "There are " << attendOver << " people that need to be excluded from the meeting. \n\n";
		}

		//ask user if he/she wants to run the program again
		cout << "Would you like to run this program again? \n";
		cout << "Type y for yes or type n for no: ";
		cin >> letter;
		cout << endl;

		//end of do-while loop
	} while (attendCheck != 0 && letter != 'n');

	cout << "Thank you for trying my program. \n\n";

	//let the DOS stay
	system("pause");
	return 0;
}