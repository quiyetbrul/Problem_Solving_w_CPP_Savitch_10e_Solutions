#include <iostream>

using namespace std;

void Ch2_Programming_Project_6() {
	const double HOURLY_PAY = 16.78;
	const double REGULAR_HOURS = 40;
	const double union_dues = 10;
	int dependents = 0;
	double social_security_tax = 0.0, federal_income_tax = 0.0, state_income_tax = 0.0;
	double insurance_dependent = 0.0, gross_pay, net_pay = 0.0, withold = 0.0, weekly_hours = 0.0;
	char ans = ' ';

	do {
		weekly_hours = inputDouble("Enter hours worked in a week: ", true);
		dependents = inputInteger("Enter numnber of dependents", true);

		weekly_hours > REGULAR_HOURS ?
			gross_pay = (HOURLY_PAY * REGULAR_HOURS) + ((1.5 * HOURLY_PAY) * (weekly_hours - REGULAR_HOURS))
			:
			gross_pay = HOURLY_PAY * weekly_hours;

		social_security_tax = 0.06 * gross_pay;
		federal_income_tax = 0.14 * gross_pay;
		state_income_tax = 0.05 * gross_pay;

		dependents >= 3 ? insurance_dependent = 35 : insurance_dependent = 0;

		withold = social_security_tax + federal_income_tax + state_income_tax + insurance_dependent + union_dues;
		net_pay = gross_pay - withold;

		cout << "\nThe gross pay is " << gross_pay << ".\n";
		cout << "Social Security Tax: " << social_security_tax << ".\n";
		cout << "Federal Income Tax: " << federal_income_tax << ".\n";
		cout << "State Income Tax: " << state_income_tax << ".\n";
		cout << "Union Due: " << union_dues << ".\n";
		cout << "Therefore, the net take-home pay is " << net_pay << ".\n\n";

		ans = inputChar("Repeat (y/n)? ", 'y', 'n');

	} while (ans == 'y');
}