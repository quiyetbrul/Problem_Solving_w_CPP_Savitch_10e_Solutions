#include <iostream>

using namespace std;

double inflation_price(double priceUnit, double rate){ 
	return priceUnit + (priceUnit * rate / 100);
}

void Ch4_Practice_Program_5(){

    double rate = inputDouble("Enter the rate: ", 0.01, 5.00);
	double price_unit = inputDouble("Enter the price of the item: ", true);

	double inflation_year_one = inflation_price(price_unit, rate);
	cout << "Year ONE inflation price: $" << inflation_year_one << ".\n";
	double inflation_year_two = inflation_price(inflation_year_one, rate);
	cout << "Year TWO inflation price: $" << inflation_year_two << ".\n";
}