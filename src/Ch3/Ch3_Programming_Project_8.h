#include <iostream>
#include <cmath>

using namespace std;

void Ch3_Programming_Project_8(){

    double pi = 1;

	double approximation = inputDouble("Enter number of term(s): ", true);

	for (int i = 1; i < approximation; i++)
	{
		pi += 4 * (pow(-1.0, i)) / ((2 * i) + 1);
	}

	pi += 3;

	cout << "The approximated value of pi: " << pi << "\n\n";
}