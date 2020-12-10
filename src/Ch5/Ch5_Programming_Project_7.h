#include <iostream>

using namespace std;

void get_input(int& month, int& day, int& year)
{
	month = inputInteger("Enter the month (1...12): ", 1, 12);
	day = inputInteger("Enter the day (1...31): ", 1, 31);
	year = inputInteger("Enter the year (1...3000): ", 1, 3000);
}
bool is_leap_year(int year)
{
	return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}
int get_month_value(int month, int year)
{
	switch (month)
	{
        case 1: return is_leap_year(year) ? 6 : 0;
        case 2: return is_leap_year(year) ? 2 : 3;
        case 3:
            if (is_leap_year(year))
                return 3;
        case 4:
            if (is_leap_year(year))
                return 6;
        case 5:
            if (is_leap_year(year))
                return 1;
        case 6:
            if (is_leap_year(year))
                return 4;
        case 7:
            if (is_leap_year(year))
                return 6;
        case 8:
            if (is_leap_year(year))
                return 2;
        case 9:
            if (is_leap_year(year))
                return 5;
        case 10:
            if (is_leap_year(year))
                return 0;
        case 11:
            if (is_leap_year(year))
                return 3;
        case 12:
            if (is_leap_year(year))
                return 5;
        default: return -1;
	}
}
int get_century_value(int year)
{
	int firstTwoDigits = year / 100;
	int remainder = firstTwoDigits % 4;
	return (3 - remainder) * 2;
}
int getYearValue(int year)
{
	int lastTwoDigits = year % 100;
	int value = lastTwoDigits / 4;
	return lastTwoDigits + value;
}

void Ch5_Programming_Project_7()
{
	int month = 0, day = 0, year = 0;
	get_input(month, day, year);

	int dayOfWeek = (day + get_month_value(month, year) + getYearValue(year) + get_century_value(year)) % 7;
	
	cout << "The day of the week is ";

	switch (dayOfWeek)
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