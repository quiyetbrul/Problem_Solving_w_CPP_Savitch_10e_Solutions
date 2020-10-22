#include <iostream>

using namespace std;

void Ch2_Programming_Project_13() {
	const double CHOCO_BARS = 230.0;
	double weight_pounds = 0.0;
	double height_inches = 0.0;
	int age_years = 0;
	char gender = ' ';

	double BMR = 0.0;

	double BMR_female = 655 + (4.3 * weight_pounds) + (4.7 * height_inches) - (4.7 * age_years);
	double BMR_male = 66 + (6.3 * weight_pounds) + (12.9 * height_inches) - (6.8 * age_years);

	weight_pounds = inputDouble("Enter weight (lbs): ", true);
	height_inches = inputDouble("Enter height (inches): ", true);
	age_years = inputInteger("Enter age (years): ", true);

	gender = inputChar("Enter gender (f/m): ", 'f', 'm');

	gender == 'f' ? BMR = BMR_female : BMR = BMR_male;

	double to_consume = BMR / CHOCO_BARS;

	cout << to_consume << " chocolate bar(s) must be consumed to maintain weight." << endl;
}