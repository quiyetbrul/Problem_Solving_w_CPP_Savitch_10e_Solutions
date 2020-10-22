#include <iostream>



using namespace std;

void Ch2_Practice_Program_5() {
	double radius = 0.0, sphere_volume = 0.0;

	radius = inputDouble("Enter radius of sphere: ", true);
	sphere_volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

	cout << "Sphere volume: " << sphere_volume << endl;
}