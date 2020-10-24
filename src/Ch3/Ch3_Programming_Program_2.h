#include <iostream>
#include <cmath>

using namespace std;

void Ch3_Programming_Program_2(){
    double a = inputDouble("Enter the value of a: ");
	double b = inputDouble("Enter the value of b: ");
	double c = inputDouble("Enter the value of c: ");

	double d = (pow(b, 2.0) - 4.0 * a*c); //d is discriminant
	double positive_root = (((-b) + sqrt(d)) / (2.0 * a));
	double negative_root = (((-b) - sqrt(d)) / (2.0 * a));

	cout << "\nThe discriminant is " << d << ".\n";

	if (d == 0)
	{
		cout << "The equation has one root.\n\n";
	}
	else if (d < 0)
	{
		cout << "The equation has two complex roots.\n\n";
	}
	else
	{
		cout << "The equation has two real roots.\n\n";
	}

	cout << "The roots of the quadratic equation are x = ";
	cout << negative_root << ", " << positive_root << ".\n";
}