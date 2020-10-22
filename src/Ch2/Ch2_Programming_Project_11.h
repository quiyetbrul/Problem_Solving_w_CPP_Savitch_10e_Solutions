#include <iostream>



using namespace std;

void Ch2_Programming_Project_11() {
	int start_temp = 0, end_temp = 0;

	start_temp = inputInteger("Enter starting temperature: ", true);
	end_temp = inputInteger("Enter ending temperature: ", true);

	double velocity = 0.0;

	for (int i = start_temp; i <= end_temp; i++) {
		velocity = 331.3 + 0.61 * i;
		cout << "At " << i << " degree(s) Celsius, the velocity of sound is " << velocity << endl;
	}
}