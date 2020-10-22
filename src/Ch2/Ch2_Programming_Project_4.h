#include <iostream>

using namespace std;

void Ch2_Programming_Project_4() {
	double loan_face_value = 0.0,
		loan_interest_rate = 0.0;
	int loan_duration_months = 0;

	char ans = ' ';

	do {

		loan_face_value = inputDouble("Enter loan needed: ", true);
		loan_interest_rate = inputDouble("Enter interest rate: ", true);
		loan_duration_months = inputInteger("Enter loan duration (months): ", true);

		double loan_interest_yield = 0.0,
			loan_duration_years = 0.0,
			loan_interest_annual = 0.0,
			loan_face_value_new = 0.0,
			loan_payment_monthly = 0.0;

		//find loan interest yielded for the loan duration
		loan_interest_yield = loan_face_value * (loan_interest_rate / 100);

		//convert months into years
		loan_duration_years = loan_duration_months / 12;

		//find total interest owed
		loan_interest_annual = loan_interest_yield * loan_duration_years;

		//find new loan face value
		loan_face_value_new = loan_face_value - loan_interest_annual;

		//find monthly loan payment
		loan_payment_monthly = loan_face_value / loan_duration_months;

		cout << endl;

		cout << "Loan required: " << loan_face_value << endl;
		cout << "Loan duration (months): " << loan_duration_months << endl;
		cout << "Interest rate: " << loan_interest_rate << endl;
		cout << "Interest yielded: " << loan_interest_yield << endl;
		cout << "Loan received after interest: " << loan_face_value_new << endl;
		cout << "Monthly payment: " << loan_payment_monthly << endl;

		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');

}
