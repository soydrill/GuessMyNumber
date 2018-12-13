// GuessMyNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << endl << endl;
	int guess;
	int actual = rand();
	bool keepgoing = true;
	char answer;
	while (keepgoing == true)
	{
		cout << "I have a number behind my back. Try to guess my number. Guess: ";
		cin >> guess;
		cout << "\nYou entered " << guess << ".\n\n";
		
		if (guess < actual)
		{
			cout << "Your guess, " << guess << ", is less than my number!" << endl;
		}

		if (guess == actual)
		{
			cout << "You guessed correctly, well done!";
			break;
		}

		if (guess > actual)
		{
			cout << "Your guess, " << guess << ", is greater than my number!" << endl;
		}

		cout << endl << endl;

		cout << "Do you wish to guess again (Y/N)?  ";
		cin >> answer;
		cout << endl << endl;

		if (answer == 'n' || answer == 'N')
		{
			keepgoing = false;
		}

	}

	return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
