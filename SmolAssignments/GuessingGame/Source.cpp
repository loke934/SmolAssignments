#include <iostream>
#include "guessingGame.h"

using namespace std;

int main() {
	guess_number();
}

void guess_number() {
	const int randomNum = rand() % 10 + 1;
	int input{};
	int count{};
	cout << "Guess the secret number" << endl;

	while (!(cin >> input) || input < 0)
	{
		cout << "Not a valid input, try again" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	count++;

	while (input != randomNum)
	{
		cout << "Guess again " << endl;
		while (!(cin >> input) || input < 0)
		{
			cout << "Not a valid input, try again" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		count++;
	}

	cout << input << " is correct , ot took you " << count << " tries." << endl;
	cout << "If you want to play again press 1, if not press any other number " << endl;
	cin >> input;
	if (input == 1)
	{
		guess_number();
	}
}
