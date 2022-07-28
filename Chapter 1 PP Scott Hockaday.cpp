/**Student Name: Scott Hockaday
*Date Completed: 9/10/2018
*Project No. 1 and Page No. in the book: PP 1 on page 24 
*Extra Credit: No
Project Description: This program will allow the user to enter two sets of numbers. One set of numbers will
calculate the sum and the other set of numbers will calculate the product. 
**/
#include <iostream>
using namespace std;

int main() {
	//ICE CREAM CALCULATOR


	cout << "Sam has finished all his chores for the day \n"
		<< "and decides to go get ice cream afterwards. Choose how \n"
		<< "many scoops he wants and determine the price of each scoop. \n"
		<< "The price of your scoops is the price of your ice cream. \n\n\n";

	//variable declaration and initialization
	int vanillaPrice, chocolatePrice, priceScoop;
	int vanillaScoop, chocolateScoop, totalScoop;

	//prompt and get user input
	cout << "Please enter the amount of vanilla scoops you want: ";
	cin >> vanillaScoop;
	cout << "Please enter the amount of chocolate scoops you want: ";
	cin >> chocolateScoop;

	//add the two variables
	totalScoop = vanillaScoop + chocolateScoop;
	cout << "You have " << totalScoop << " scoops of ice cream altogether." << endl << endl << endl;

	//prompt and get user input
	cout << "The cost of each vanilla scoop is: $";
	cin >> vanillaPrice;
	cout << "The cost of each chocolate scoop is: $";
	cin >> chocolatePrice;

	//multiply the two variables, add again
	priceScoop = (vanillaPrice * vanillaScoop) + (chocolatePrice * chocolateScoop);
	cout << "The total cost of your ice cream is $" << priceScoop << endl << endl;

	//display information
	cout << "You have " << totalScoop << " total scoops of ice cream \n" 
		<< "and the total of your ice cream comes out to $" << priceScoop << ".\n\n";

	//let the DOS window stay
	system("pause");
	return 0;
}