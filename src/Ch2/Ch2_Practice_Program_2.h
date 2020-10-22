#include <iostream>

using namespace std;

void Ch2_Practice_Program_2() {
	double number = 0.0, r = 0.0, guess = 0.0, previous_guess = 0.0;

	//prompt user for a number to find the square root
	number = inputInteger("Enter a number to find the square root: ", true);

	//assign initial guess
	guess = number / 2;

	//repetition structure
	do {
		r = number / guess;
		previous_guess = guess;
		guess = (guess + r) / 2;
	} while (previous_guess - guess > 0.01 * previous_guess);

	//display result
	cout << "Square root approximation of " << number << " is " << guess << endl;
}