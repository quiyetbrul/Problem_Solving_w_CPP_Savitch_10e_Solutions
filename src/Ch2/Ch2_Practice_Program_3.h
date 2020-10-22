#include <iostream>

using namespace std;

void Ch2_Practice_Program_3() {
	double initial_mph = 0.0;
	double get_minutes = 0.0;
	int get_seconds = 0;

	//prompt user for mph
	initial_mph = inputDouble("Enter mph: ", true);

	//mph conversion into pace

	//double minute value include seconds as decimals
	get_minutes = 60 / initial_mph;

	//cast double minute value into an integer
	//then subtract from double minute value
	get_seconds = (get_minutes - (int)get_minutes) * 60;

	//display result
	cout << initial_mph << " mph is " << (int)get_minutes << " minute(s) and " << get_seconds << " second(s)" << endl;
}
