#include <iostream>

using namespace std;

int compute_difference(int starting_hour, int starting_minute, bool starting_meridiem, int ending_hour, int ending_minute, bool ending_meridiem){
    int time_difference = 0;

    // switch user input into 24-hour time
    if (starting_hour == 12 && starting_meridiem) starting_hour = 0;
    if (ending_hour == 12 &&  ending_meridiem) ending_hour = 0;
    if (starting_hour > 12 && !starting_meridiem) starting_hour += 12;
    if (ending_hour > 12 && !ending_meridiem) ending_hour += 12;

    if ((starting_meridiem && ending_meridiem) || (!starting_meridiem && !ending_meridiem)) // condition if input time are from the same day or not
    {
        if (starting_hour < ending_hour) // ex. (10:00 AM && 11:00 AM)|| (1:00 PM && 2:00 PM)
            time_difference = (abs)(starting_hour - ending_hour) * 60;
        else if (starting_hour > ending_hour) // ex. (11:00 AM && 10:00 AM)|| (2:00 PM && 1:00 PM)
            time_difference = (abs)(starting_hour - ending_hour - 24) * 60;
        else time_difference = 24 * 60; // ex. (11:00 AM && 11:00 AM)|| (1:00 PM && 1:00 PM) // for the following day
    }
    else // calc AM to PM and PM to AM are wonky
        time_difference = (abs)(starting_hour - ending_hour) * 60;
    


    if (starting_minute < ending_minute)
        time_difference += (abs)(starting_minute - ending_minute);
    else
        time_difference -= (abs)(starting_minute - ending_minute);


    return time_difference;
}


/*
    -one way of solving this problem is to first figure out if it's AM/PM
        and then change the time into military time and multiply everything by 60
        to then get the difference
            --potential problem is getting difference between days
*/

void Ch4_Programming_Project_7(){
    int starting_hour = inputInteger("Starting hour: ", 1,12);
    int starting_minute = inputInteger("Starting minute: ", 0,60);
    bool starting_meridiem = inputInteger("Starting meridiem (1-am, 0-pm): ", 0,1);
    int ending_hour = inputInteger("Ending hour: ", 1,12);
    int ending_minute = inputInteger("Ending minute: ", 0,60);
    bool ending_meridiem = inputInteger("Ending meridiem (1-am, 0-pm): ", 0,1);

    cout << compute_difference(starting_hour, starting_minute, starting_meridiem, ending_hour, ending_minute, ending_meridiem) 
         << " minute(s) difference" << endl;
}