#include <iostream>

using namespace std;

void compute_coins(int coinValue, int& number, int& amount_left)
{
	//amountLeft = change value = 86 cents
	//coinValue = 1 quarter = 25 cents...1 penny = 1 cent
	//number = 2 quarters...3 pennies
	number = amount_left / coinValue;
	amount_left %= coinValue;

}
void Ch5_Programming_Project_4()
{
	int number;
	int amount_left = inputInteger ("Enter the amount of change (1...99): ", 1, 99);

	cout << "Change can be given as ";
	compute_coins(25, number, amount_left);
	cout << number << " quarter(s) ";
	compute_coins(10, number, amount_left);
	cout << number << " dime(s) ";
	cout << amount_left << " penny(pennies).\n";

}