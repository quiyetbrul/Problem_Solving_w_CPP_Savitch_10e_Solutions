#include <iostream>

using namespace std;

//get_month_value, get_year_value, get_century_value are under ch5 prog proj 7
int get_day_of_week(int month, int day, int year)
{
	int dayOfWeek = (day + get_month_value(month, year) + get_year_value(year) + get_century_value(year)) % 7;
	return dayOfWeek;
}

void Ch5_Programming_Project_8(){
    int month = 0, day = 0, year = 0;
	get_input(month, day, year);

	cout << "\nThe day of the week is ";

	switch (get_day_of_week(month, day, year))
	{
	case 0: cout << "Sunday"; break;
	case 1: cout << "Monday"; break;
	case 2: cout << "Tuesday"; break;
	case 3: cout << "Wednesday"; break;
	case 4: cout << "Thursday"; break;
	case 5: cout << "Friday"; break;
	case 6: cout << "Saturday"; break;
	default: break;
	}

	cout << endl;
}