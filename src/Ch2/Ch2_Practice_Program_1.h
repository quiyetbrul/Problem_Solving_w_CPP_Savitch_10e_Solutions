#include <iostream>

using namespace std;

void Ch2_Practice_Program_1() {
	char ans;
	double cereal_weight = 0.0;
	int cereal_boxes = 0;

	//repetition structure
	do {
		//prompt user for cereal weight
		cereal_weight = inputDouble("Enter cereal weight(oz): ", true);

		//prompt user for cereal boxes
		cereal_boxes = inputInteger("Enter number of boxes: ", true);

		cout << "Cereal weight entered: " << cereal_weight << endl;
		cout << "Cereal boxes entered: " << cereal_boxes << endl;

		//prompt user for iteration
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}