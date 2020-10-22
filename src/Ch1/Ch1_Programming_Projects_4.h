#include <iostream>


using namespace std;

void Ch1_Programming_Projects_4() {
	double timeSeconds, distance;
	cout << "Assume an object starts at rest then freefalls without any friction or resistance from air at 32 feet per second.\n";
	cout << "How far will the object freefall for a specific length of time?\n";
	cout << "Enter the value of time in seconds: ";
	cin >> timeSeconds;

	distance = (32 * (timeSeconds * timeSeconds)) / 2;

	cout << "\nLet's plug in the numbers into the following equation: \n";

	cout << "distance = (acceleration * (time^2)) / 2\n\n";
	//^2 = exponential power of two

	cout << distance << " = 32 * ( " << (timeSeconds) << " * " << (timeSeconds) << " ) / 2\n\n";
	//math equation with values plugged in.

	cout << "After " << timeSeconds << " seconds," << " the object will be ";
	cout << distance << " feet far from its initial position.\n";
}