#include <iostream>

using namespace std;

void Ch2_Programming_Project_12() {
	double radius_well_casing = inputDouble("Enter the radius of the well casing (in.): ", true);
	double depth_well_casing = inputDouble("Enter the depth of the well casing (ft.): ", true);

	double volume_cylinder = M_PI * pow(radius_well_casing, 2) * depth_well_casing;
	double gallons = volume_cylinder * 7.48;

	cout << "The well can hold up to " << gallons << " gallons of water." << endl;
}