#include <iostream>

using namespace std;

double windchill_index(double& wind_speed, double& temperature)
{
	double windchill_index = 13.12 
						   + 0.6215 * temperature
						   - 11.37 * pow(wind_speed, 0.16)
						   + 0.3965 * temperature * pow(wind_speed, 0.016);
	return windchill_index;
}
void Ch5_Programming_Project_5()
{
	double wind_speed = inputDouble("Wind speed in m/sec: ", true);
	double temperature = inputDouble("Temperatre in Celsius <=10: ", -100, 10);
	cout << "\nWindchill index (in degrees Celsius): "
		<< windchill_index(wind_speed, temperature)
		<< " degree Celsius" << endl;
}