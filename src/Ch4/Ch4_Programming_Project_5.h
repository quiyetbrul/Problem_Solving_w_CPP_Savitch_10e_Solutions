#include <iostream>

using namespace std;

double basal_metabolic_Rate(double P) //p for pounds
{
	return 70 * pow(P / 2.2, 0.756);
}
double physical_activity(double P, double intensity, double minutes)
{
	return 0.0385 * intensity * P * minutes;
}
double energy_to_digest_food(double totalCalories)
{
	return totalCalories * 0.1;
}
void Ch4_Programming_Project_5(){
	double P = inputDouble("\nEnter the person's weight in pounds: ", true);
	double intensity = inputDouble("Enter the intensity of physical activity: ", true);
	double minutes = inputDouble("Enter the number of minutes spent performing the physical activity: ", true);
	double totalCalories = inputDouble("Enter the number of calories per serving of a food: ", true);
	double caloriesRequired = basal_metabolic_Rate(P) + physical_activity(P, intensity, minutes) + energy_to_digest_food(totalCalories);
	cout << "The number of servings of that food to maintain the person's weight is " <<
		caloriesRequired / totalCalories << endl;
}