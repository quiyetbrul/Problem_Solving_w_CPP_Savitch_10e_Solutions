#include <iostream>

using namespace std;

void Ch2_Programming_Project_15() {
	double length_initial = 0.0; //L-zero
	double displacement_meters = 0.0; //L-triangle
	double temperature_celsius_change = 0.0; //T-triangle
	double coefficient_linear_expression = 0.0; //a

	coefficient_linear_expression = inputDouble("Enter coefficient for linear expression: ", true);
	displacement_meters = inputDouble("Enter displacement length (meters): ", true);
	temperature_celsius_change = inputDouble("Enter temperature change (celsius): ", true);

	length_initial = coefficient_linear_expression * displacement_meters * temperature_celsius_change;
	cout << (length_initial > 0 ? "The material will expand by the displacement in meters " : "The material will contract by ") << length_initial;
	
}