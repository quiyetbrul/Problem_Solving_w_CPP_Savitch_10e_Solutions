#include <iostream>



using namespace std;

void Ch2_Programming_Project_5() {
	int max_room_capacity = 0, number_of_attendees = 0, open_seats = 0;
	char ans = ' ';

	do {
		max_room_capacity = inputInteger("Max room capacity: ", true);
		number_of_attendees = inputInteger("Present attendees: ", true);

		open_seats = max_room_capacity - number_of_attendees;

		if (number_of_attendees < max_room_capacity)
			cout << "Meeting can be legally attended. Open seats left: " << open_seats << endl;
		else
			cout << "Meeting cannot be held as planned due to fire regulations." << endl
			<< "The max room capacity has been exceeded by " << open_seats * -1 << endl;

		ans = inputChar("Repeat (y/n)? ", 'y', 'n');

	} while (ans == 'y');
}