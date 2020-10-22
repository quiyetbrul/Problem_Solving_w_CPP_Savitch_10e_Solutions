#include <iostream>



using namespace std;

void Ch2_Programming_Project_7() {
	double item_purchase_date = 0.0;
	double item_cost = 0.0;
	double item_inflation_rate = 0.0;

	item_cost = inputDouble("Cost of items ($):", true);
	item_purchase_date = inputDouble("When will these items be purchased (years)? ", true);
	item_inflation_rate = inputDouble("Inflation rate of the item (%): ", true);

	item_inflation_rate /= 100;

	for (int i = 0; i < item_purchase_date; i++)
		item_cost += item_cost * item_inflation_rate;

	cout << endl;
	cout << "Cost: $" << item_cost << endl;
	cout << "Purchase date: " << item_purchase_date << " year(s) from now" << endl;
	cout << "Inflation rate: " << item_inflation_rate << "%" << endl;
}