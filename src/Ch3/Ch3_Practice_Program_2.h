#include <iostream>

using namespace std;

void Ch3_Practice_Program_2()
{
	char ans = ' ';
	do
	{
		double account_balance = inputDouble("Enter account balance: ", true);
		double interest = 0.0;

		account_balance <= 1000 ? interest = 1.5 : interest = 1.0;

		double total_amount_due = account_balance + (account_balance * (interest / 100));

		double minimum_payment = 0.0;

		total_amount_due <= 10 ? minimum_payment = total_amount_due : minimum_payment = total_amount_due * 10 / 100;

		cout << "Total amount due: " << total_amount_due << endl;
		cout << "Minimum payment: " << minimum_payment << endl;

		ans = inputChar("Repeat? ", 'y', 'n');
		cout << endl;
	} while (ans == 'y');
}
