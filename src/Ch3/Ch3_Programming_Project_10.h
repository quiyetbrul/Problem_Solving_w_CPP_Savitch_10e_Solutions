#include <iostream>

using namespace std;

void Ch3_Programming_Project_10(){
    char gender, answer;
	const double CHOCOLATE_BAR = 230.0;

	gender = inputChar("Enter gender (m/f): ", "mf");

	double BMR; //basal metabolic rate
	double weight = inputDouble("Enter weight in pounds: ", 70, 700);
	double height = inputDouble("Enter height in inches: ", 24, 84);
	int age = inputInteger("Enter age in years: ", 18, 104);
    cout << endl;

	if (gender == 'M')
		BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
	else
		BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);

    answer = inputChar("Are you A-Sedentary, B-Somewhat active, C-Active, or D-Highly active? ", "abcd");
    cout << endl;

	switch (answer)
	{
        case 'A': BMR += BMR * 0.20; break;
        case 'B': BMR += BMR * 0.30; break;
        case 'C': BMR += BMR * 0.40; break;
        case 'D': BMR += BMR * 0.50; break;
	}

	cout << BMR / CHOCOLATE_BAR << " of chocolate bar(s) should be comsumed to maintain one's weight" << endl;
}