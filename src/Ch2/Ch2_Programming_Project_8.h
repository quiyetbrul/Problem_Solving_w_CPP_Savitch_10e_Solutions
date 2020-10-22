#include <iostream>

using namespace std;

void Ch2_Programming_Project_8() {

	//there's probably some kind of logic error somewhere

	double item_cost = inputDouble("Enter item cost: ", true);
	double interest_annual = inputDouble("Enter annual interest: ", true);
	double payment_monthly = inputDouble("Enter monthly payment: ", true);

	double debt = item_cost;
	double interest_monthly = (interest_annual / 100) / 12;
	double interest = 0;
	double total_interest = 0;
	double principal = 0;
	int months = 0;

	while (debt > 0)
	{
		interest = debt * interest_monthly;
		debt >= payment_monthly ? principal = payment_monthly - interest : principal = debt;
		debt = debt - principal;
		months++;
		total_interest += interest;
	}

	cout << endl << months << " month(s) needed to pay" << endl;
}