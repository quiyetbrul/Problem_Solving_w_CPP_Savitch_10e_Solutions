#include <iostream>
#include "Chapter_2.h"
#include "../input_validation.h"

using namespace std;

void Ch2_Programming_Project_2() {
	int months = 6;
	char ans = ' ';
	double current_annual_salary = 0.0;

	do {
		current_annual_salary = inputDouble("Enter annual salary", true);

		retroactive_salary(months, current_annual_salary);
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}