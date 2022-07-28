/**Student Name: Scott Hockaday

  *Date Completed: 10/01/18

  *Project No. 1 and Page No. 172 in the book: Chapter 3 PP

  *Extra Credit: Yes

  *Project Description: Write a program to score the paper-rock-scissors game. 
  Each of two users type either P, R, or S. The program then announces the winner as well as the basis for determining the winner: 
  Paper covers rock, Rock breaks scissors, Scissors cuts paper or Nobody wins. Be sure to allow the user to use lowercase 
  as well as uppercase letters. Your program should include a loop that lets the user play again until the user says she or he is done.

**/

#include <iostream>
using namespace std;


int main() {
	//variable declaration and initialization
	char rpsChoiceOne, rpsChoiceTwo;
	char choiceYN;

	//display information
	cout << "Welcome to Rock, Paper, Scissors! \n";
	cout << "Your choices are R/r/P/p/S/s \n";
	cout << "R/r is rock. P/p is paper. S/s is scissors.\n\n\n";

	//do-while loop
	do 
	{
		//prompt and get user input for Player one
		cout << "Player 1, pick your move: ";
		cin >> rpsChoiceOne;
		
		// Player One: if-else and else-if statements
		if (rpsChoiceOne == 'R' || rpsChoiceOne == 'r')
		{
			cout << "Player one chose rock. \n";
		}
		else if (rpsChoiceOne == 'P' || rpsChoiceOne == 'p')
		{
			cout << "Player one chose paper. \n";
		}
		else if (rpsChoiceOne == 'S' || rpsChoiceOne == 's')
		{
			cout << "Player one chose scissors. \n";
		}
		else
		{
			do {
				cout << "Invalid choice Player one! Please choose a valid move: ";
				cin >> rpsChoiceOne;
				
			} while (!(rpsChoiceOne == 'R' || rpsChoiceOne == 'r' || rpsChoiceOne == 'P' || rpsChoiceOne == 'p' || rpsChoiceOne == 'S' || rpsChoiceOne == 's'));
		}

		//Prompt and get user input from Player two
		cout << endl;
		cout << "Player 2, pick your move: ";
		cin >> rpsChoiceTwo;

		//Player Two: if-else and else-if statements
		if (rpsChoiceTwo == 'R' || rpsChoiceTwo == 'r')
		{
			cout << "Player two chose rock. \n";
		}
		else if (rpsChoiceTwo == 'P' || rpsChoiceTwo == 'p')
		{
			cout << "Player two chose paper. \n";
		}
		else if (rpsChoiceTwo == 'S' || rpsChoiceTwo == 's')
		{
			cout << "Player two chose scissors. \n";
		}
		else
		{
			do {
				cout << "Invalid choice Player two! Please choose a valid move: ";
				cin >> rpsChoiceTwo;
			} while (!(rpsChoiceTwo == 'R' || rpsChoiceTwo == 'r' || rpsChoiceTwo == 'P' || rpsChoiceTwo == 'p' || rpsChoiceTwo == 'S' || rpsChoiceTwo == 's'));
		} cout << endl;

		//Game logic and outcomes
		//DRAWS
		if (rpsChoiceOne == 'R' && rpsChoiceTwo == 'R')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'r' && rpsChoiceTwo == 'r')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'R' && rpsChoiceTwo == 'r')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'r' && rpsChoiceTwo == 'R')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'P' && rpsChoiceTwo == 'P')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'p' && rpsChoiceTwo == 'p')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'P' && rpsChoiceTwo == 'p')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'p' && rpsChoiceTwo == 'P')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'S' && rpsChoiceTwo == 'S')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 's' && rpsChoiceTwo == 's')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 'S' && rpsChoiceTwo == 's')
		{
			cout << "DRAW!!! \n\n";
		}
		else if (rpsChoiceOne == 's' && rpsChoiceTwo == 'S')
		{
			cout << "DRAW!!! \n\n";
		}

		//Rock against paper and scissors
		if (rpsChoiceOne == 'R' || rpsChoiceOne == 'r')
		{
			if (rpsChoiceTwo == 'P' || rpsChoiceTwo == 'p')
			{
				cout << "Player two wins! Paper covers rock. \n\n";
			}
			else if (rpsChoiceTwo == 'S' || rpsChoiceTwo == 's')
			{
				cout << "Player one wins! Rock breaks scissors. \n\n";
			}
		}
		//Paper against rock and scissors
		else if (rpsChoiceOne == 'P' || rpsChoiceOne == 'p')
		{
			if (rpsChoiceTwo == 'R' || rpsChoiceTwo == 'r')
			{
				cout << "Player one wins! Paper covers rock. \n\n";
			}
			else if (rpsChoiceTwo == 'S' || rpsChoiceTwo == 's')
			{
				cout << "Player two wins! Scissors cuts paper. \n\n";
			}

		}
		//Scissors against rock and paper
		else if (rpsChoiceOne == 'S' || rpsChoiceOne == 's')
		{
			if (rpsChoiceTwo == 'R' || rpsChoiceTwo == 'r')
			{
				cout << "Player two wins! Rock breaks scissors. \n\n";
			}
			else if (rpsChoiceTwo == 'P' || rpsChoiceTwo == 'p')
			{
				cout << "Player one wins! Scissors cuts paper. \n\n";
			}
		}

		//ask user if user wants to play Rock, Paper, Scissors again
		cout << "Would you like to play the game again? \n";
		cout << "Type y for yes and n for no: ";
		cin >> choiceYN;
		cout << endl;

	} while (choiceYN == 'y' || choiceYN == 'Y');

	//let the DOS window stay
	system("pause");
	return 0;
}