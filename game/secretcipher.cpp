#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	cout << "\n---*Secret-Cipher*--- \nWELCOME to the Secret Cipher game i.e; The Number Guessing Game!"
		<< endl;
	cout << "You have to guess a number between 1 and 100. \n\a"
			"You'll have limited choices based on the level you choose. "
            "\nGood Luck! :)"
		<< endl;

	while (true) 
    {
		cout << "\nEnter the difficulty level: \n";
		cout << "1 for Easy!\n";
		cout << "2 for Medium!\n";
		cout << "3 for Difficult!\n";
		cout << "0 to END the game!\n" << endl;

		// select the level of difficulty
		int difficultyChoice;
		cout << "Enter the number: ";
		cin >> difficultyChoice;

		// generating the secret number
		srand(time(0));
		int secretNumber = 1 + (rand() % 100);
		int playerChoice;

		// Difficulty Level:Easy
		if (difficultyChoice == 1) {
			cout << "\nYou have 10 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 10;
			for (int i = 1; i <= 10; i++) 
            {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Voila! You Won... \nWell Played. :)\n"
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\nThanks for playing..."
						<< endl;
					cout << "Play the game again with us!!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", \nOops! You lost!!! :(\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}

		// Difficulty level : Medium
		else if (difficultyChoice == 2) {
			cout << "\nYou only have 7 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 7;
			for (int i = 1; i <= 7; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Voila! You Won... Well Played. :)"
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing..."
						<< endl;
					cout << "Play the game again with us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", \nUh-Oh.. You lost! :(\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// Difficulty level : Medium
		else if (difficultyChoice == 3) {
			cout << "\nYou only have 5 choices for finding the secret number between 1 and 100.";
			int choicesLeft = 5;
			for (int i = 1; i <= 5; i++) {

				// prompting the player to guess the secret
				// number
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// determining if the playerChoice matches
				// the secret number
				if (playerChoice == secretNumber) {
					cout << "Voila! You Won... Well Played. :)"
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing..."
						<< endl;
					cout << "Play the game again with us!!\n\n"
						<< endl;
					break;
				}
				else {
					cout << "Nope, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > secretNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					choicesLeft--;
					cout << choicesLeft << " choices left. "
						<< endl;
					if (choicesLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< secretNumber
							<< ", \ngame.exe    Oops!.. You lost! :(\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// To end the game
		else if (difficultyChoice == 0) {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "
					"play the game! (0,1,2,3)"
				<< endl;
		}
	}
	return 0;
}
