#include <iostream>
#include "Chapter_2.h"
#include "../input_validation.h"

using namespace std;

void Ch2_Programming_Project_1() {
	char ans = ' ';
	double mass_sweetner = 0.0, mass_mouse = 0.0, mass_dieter = 0.0, number_soda = 0.0;
	const double PERCENT = 0.001;

	do {
		mass_sweetner = inputDouble("Sweetener mass required to kill a mouse: ", true);
		mass_mouse = inputDouble("Mouse mass: ", true);
		mass_dieter = inputDouble("Dieter mass: ", true);

		number_soda = (mass_dieter * (mass_sweetner / mass_mouse)) / (mass_sweetner * PERCENT);
		cout << "Soda pop limit: " << (ceil(number_soda) - 1) << endl;

		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}