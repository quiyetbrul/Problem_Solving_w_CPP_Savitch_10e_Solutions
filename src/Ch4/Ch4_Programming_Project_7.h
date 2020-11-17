#include <iostream>

using namespace std;

int compute_difference(int starting_hour, int starting_minute, bool starting_meridiem, int ending_hour, int ending_minute, bool ending_meridiem){
    int time_difference = 0;

    // switch user input into 24-hour time
    if (starting_hour == 12 && starting_meridiem) starting_hour = 0;
    if (ending_hour == 12 &&  ending_meridiem) ending_hour = 0;
    if (starting_hour > 12 && !starting_meridiem) starting_hour += 12;
    if (ending_hour > 12 && !ending_meridiem) ending_hour += 12;

    // if (starting_hour < ending_hour)                    // ex. (10:00 AM && 11:00 AM)|| (1:00 PM && 2:00 PM) // same day
    //     time_difference = (abs)(starting_hour - ending_hour) * 60;
    // else if (starting_hour > ending_hour)               // ex. (11:00 AM && 10:00 AM)|| (2:00 PM && 1:00 PM) // following day
    //     time_difference = (abs)(starting_hour - ending_hour - 24) * 60;
    // else if (starting_hour == ending_hour)              // ex. (11:00 AM && 11:00 AM)|| (1:00 PM && 1:00 PM) // 24-hour difference
    //     time_difference = 24 * 60;

    // calculate hours
    if ((starting_meridiem && ending_meridiem) || (!starting_meridiem && !ending_meridiem)) // same_day? same_meridiem?
    {
        if (starting_hour < ending_hour)                    // ex. (10:00 AM && 11:00 AM)|| (1:00 PM && 2:00 PM) // same day
            time_difference = (abs)(starting_hour - ending_hour) * 60;
        else if (starting_hour > ending_hour)               // ex. (11:00 AM && 10:00 AM)|| (2:00 PM && 1:00 PM) // following day
            time_difference = (abs)(starting_hour - ending_hour - 24) * 60;
        else if (starting_hour == ending_hour)              // ex. (11:00 AM && 11:00 AM)|| (1:00 PM && 1:00 PM) // 24-hour difference
            time_difference = 24 * 60;
    }
    else if (starting_meridiem && !ending_meridiem) // AM to PM
    {
        time_difference = (abs)(starting_hour - ending_hour) * 60;
    }
    else if (!starting_meridiem && ending_meridiem) // PM to AM
    {
        time_difference = (abs)(starting_hour - ending_hour) * 60;
    }


    // calculate minutes
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
    // int starting_hour = inputInteger("Starting hour: ", 1,12);
    // int starting_minute = inputInteger("Starting minute: ", 0,60);
    // bool starting_meridiem = inputInteger("Starting meridiem (1-am, 0-pm): ", 0,1);

    // int ending_hour = inputInteger("Ending hour: ", 1,12);
    // int ending_minute = inputInteger("Ending minute: ", 0,60);
    // bool ending_meridiem = inputInteger("Ending meridiem (1-am, 0-pm): ", 0,1);

    // cout << compute_difference(starting_hour, starting_minute, starting_meridiem, ending_hour, ending_minute, ending_meridiem) 
    //      << " minute(s) difference" << endl;
    
    cout << "same day,           10AM/11AM    " << compute_difference(10, 0, 1, 11, 0, 1) << " minute(s) difference" << endl; // ex. (10:00 AM && 11:00 AM)|| (1:00 PM && 2:00 PM) // same day
    cout << "same day,           1PM/2PM      " << compute_difference(1, 0, 0, 2, 0, 0) << " minute(s) difference" << endl << endl; // ex. (10:00 AM && 11:00 AM)|| (1:00 PM && 2:00 PM) // same day

    cout << "following day,      11AM/10AM    " << compute_difference(11, 0, 1, 10, 0, 1) << " minute(s) difference" << endl; // ex. (11:00 AM && 10:00 AM)|| (2:00 PM && 1:00 PM) // following day
    cout << "following day,      2PM/1PM      " << compute_difference(2, 0, 0, 1, 0, 0) << " minute(s) difference" << endl << endl; // ex. (11:00 AM && 10:00 AM)|| (2:00 PM && 1:00 PM) // following day

    cout << "24-hour,            1AM/1AM      " << compute_difference(1, 0, 1, 1, 0, 1) << " minute(s) difference" << endl; // ex. 24-hour difference
    cout << "24-hour,            1PM/1PM      " << compute_difference(1, 0, 0, 1, 0, 0) << " minute(s) difference" << endl << endl; // ex. 24-hour difference

    cout << "AM-NOON,            11AM/12PM    " << compute_difference(11, 0, 1, 12, 0, 0) << " minute(s) difference" << endl; // ex. AM-PM difference
    cout << "NOON-PM,            12PM/1PM     " << compute_difference(12, 0, 0, 1, 0, 0) << " minute(s) difference" << endl << endl; // ex. NOON-PM difference

    cout << "PM-MIDNIGHT,        11PM/12AM    " << compute_difference(11, 0, 0, 12, 0, 1) << " minute(s) difference" << endl; // ex. PM-MIDNIGHT difference
    cout << "MIDNIGHT-AM,        12AM/1AM     " << compute_difference(12, 0, 1, 1, 0, 1) << " minute(s) difference" << endl << endl; // ex. PM-MIDNIGHT difference
    
    cout << "AM-PM,              11AM/1PM     " << compute_difference(11, 0, 1, 1, 0, 0) << " minute(s) difference" << endl; // ex. NOON-PM difference
    cout << "PM-AM,              11PM/1AM     " << compute_difference(11, 0, 0, 1, 0, 1) << " minute(s) difference" << endl << endl; // ex. PM-MIDNIGHT difference

    
}