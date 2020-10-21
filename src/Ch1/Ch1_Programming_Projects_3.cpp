#include <iostream>
#include "Chapter_1.h"

using namespace std;

void Ch1_Programming_Projects_3() {
	double quarters, dimes, nickels, penny, total;

	cout << "Let's count your coins!\n" << "Press enter upon entering a value.\n\n";

	cout << "How many of each do you have?\n";
	cout << "Quarters: ";
	cin >> quarters;
	cout << "Dimes: ";
	cin >> dimes;
	cout << "Nickels: ";
	cin >> nickels;
	cout << "Penny: ";
	cin >> penny;

	total = .25 * quarters + .10 * dimes + .05 * nickels + .01 * penny;

	cout << "If you have " << quarters << " quarters, " << dimes << "  dimes, ";
	cout << nickels << " nickels, and ";
	cout << penny << " penny, then your total coin value is ";
	cout << "$" << total << ".\n " << "Spend wisely, human!" << endl;
}