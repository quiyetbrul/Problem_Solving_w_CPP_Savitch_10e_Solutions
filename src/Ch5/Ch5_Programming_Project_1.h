#include <iostream>

using namespace std;

void time_input(int& hour, int& minute){
    hour = inputInteger("Hour: ", 0,23);
    minute = inputInteger("Minute: ", 0,59);
}

void time_conversion(int& hour, int& minute, string& AmPm){
    time_input(hour, minute);

    if (hour >= 13) // convert afternoon/night
    {
        hour -= 12;
        AmPm = "PM";
    }
    else if (hour == 0) // convert midnight
    {
        hour += 12;
        AmPm = "AM";
    }
    else if (hour == 12) // convert noon
    {
        AmPm = "PM";
    }
    else if (hour <= 11) // convert dawn/morning
    {
        AmPm = "AM";
    }
    
}

void time_output(int& hour, int& minute, string& AmPm){
    time_conversion(hour, minute, AmPm);
    cout << "TIME: " << hour  << ":" << minute << " " << AmPm << endl;
}

void Ch5_Programming_Project_1(){
}