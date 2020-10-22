#include <iostream>

using namespace std;

void Ch2_Programming_Project_3() {
	int months = 0;
	char ans = ' ';
	double current_annual_salary = 0.0;

	do {
		months = inputInteger("Enter month(s): ", true);
		current_annual_salary = inputDouble("Enter annual salary: ", true);

		retroactive_salary(months, current_annual_salary);
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}