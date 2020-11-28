#include <iostream>

using namespace std;

void time_input_now_later(int& hour, int& minute){
    hour = inputInteger("Hour: ", 0,23);
    minute = inputInteger("Minute: ", 0,59);
}

void calc_time_waiting(int& hour_difference, int& minute_difference){
    int hour_now, minute_now, hour_later, minute_later;
    time_input_now_later(hour_now, minute_now);
    time_input_now_later(hour_later, minute_later);

    while(hour_now != hour_later){
        if(hour_now >= 24) hour_now = 0;

        hour_now++;
        hour_difference++;
    }

    minute_difference = abs(minute_now-minute_later);
}

void Ch5_Programming_Project_2(){
    int hour_difference = 0, minute_difference = 0;
    calc_time_waiting(hour_difference, minute_difference);
    cout << hour_difference  << " hours and " 
         << minute_difference << " minutes waiting time"<< endl;
}