#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(void){

	srand( time( NULL) ); // seed random number from time
	int random_number = 1 + (rand() % 10); // random number between 1 and 10
	// declare variable to store guess of user and set to 0
	int v = 0;
	// declare variable as counter for number of guesses
	int g = 0;
	
	for(;;)
	{
		// increment guess counter
		g=g+1;

		// read input from user
		cout << "Guess a number from 1 to 10:\n";
		cin >> v;
		
		// compare input from user to random number
		if( v == random_number)
		{cout << "Correct! You Win!\n"; break;
		}else
		{cout<< "Incorrect. Try again.\n";}
		
		
		// print out winner, too high or too low message
		if( v > random_number)
		{cout << "Too high!\n";
		}else
		{cout<< "Too low!\n";}
	
	}

	// print message with number of guesses
	cout << g << " Guesses taken.\n";

	return 0;
}
