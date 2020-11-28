#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

void time_input(int& hour, int& minute);//, bool& is_AM){
//     hour = inputInteger("Hour: ", 0,12);
//     minute = inputInteger("Minute: ", 0,59);
//     is_AM = inputInteger("1-AM / 0-PM: ");
// }

void calc_time_waiting_12h(int& hour_difference, int& minute_difference){
    int hour_now, minute_now, hour_later, minute_later;
    // bool meridiem_now, meridiem_later;
    time_input(hour_now, minute_now);//, meridiem_now);
    time_input(hour_later, minute_later);//, meridiem_later);

    while(hour_now != hour_later){
        if(hour_now >= 12) hour_now = 0;

        hour_now++;
        hour_difference++;
    }

    minute_difference = abs(minute_now-minute_later);
}

void Ch5_Programming_Project_3(){
    int hour_difference = 0, minute_difference = 0;
    cout << "Assuming that both time inputs are within the same day" << endl;
    calc_time_waiting_12h(hour_difference, minute_difference);
    cout << hour_difference  << " hours and " 
         << minute_difference << " minutes waiting time"<< endl;
}