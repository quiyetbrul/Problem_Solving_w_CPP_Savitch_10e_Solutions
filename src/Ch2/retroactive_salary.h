#include <iostream>
using namespace std;

void retroactive_salary(int months, double current_annual_salary) {
	const double PAY_INCREASE = 0.076;

	current_annual_salary = 0.0;
	double retroactive_pay = (current_annual_salary / 12) * PAY_INCREASE * months;

	double new_annual_salary = current_annual_salary + (current_annual_salary * PAY_INCREASE);

	double new_monthyly_salary = new_annual_salary / 12;

	cout << "\nThe new montly salary is $" << new_monthyly_salary;
	cout << " with a retroactive pay of $" << retroactive_pay;
	cout << ", amounting to $" << new_annual_salary << " annually.\n\n";
}