#include <iostream>

using namespace std;

double gForce(double mass1, double mass2, double distance){
	const double GRAVITATIONAL_CONSTANT = 6.673 * pow(10, -8);

	return (GRAVITATIONAL_CONSTANT * mass1 * mass2) / pow(distance, 2);
}

void Ch4_Practice_Program_7(){

    double mass1 = inputDouble("Enter the mass of the first body (in pounds): ", true);
	double mass2 = inputDouble("Enter the mass of the second body (in pounds): ", true);
	double distance = inputDouble("Enter the distance between them (in centimeter): ", true);

	cout << "The gravitational force between the two objects is "
		<< gForce(mass1, mass2, distance) << " dyne(s)." << endl;
}