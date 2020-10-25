#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const double rate_8_18_MF = 0.40;
const double rate_18_8_MF = 0.25;
const double rate_SS = 0.15;

const vector<string> WEEKDAY {"monday", "tuesday", "wednesday", "thursday", "friday"};
const vector<string> WEEKEND {"saturday", "sunday"};

double call_cost(double minutes, double rates){
    return minutes * rates;
}

void Ch3_Programming_Project_1(){
    string day = "";
    double call_rate;

    cout << "Enter the day: ";
    cin >> day;
    
    for_each(day.begin(),day.end(),[](char & c) {c = ::tolower(c);});
    double starting_time = inputDouble("Enter the call time (0-2400): ", 0, 2400);
    double call_minutes = inputDouble("Enter the call length in minutes: ", true);

    if(find(WEEKDAY.begin(), WEEKDAY.end(), day) != WEEKDAY.end()){
        if(starting_time >= 800 && call_minutes <= 1800){
            call_rate = call_cost(call_minutes, rate_8_18_MF);
        } else call_rate = call_cost(call_minutes, rate_18_8_MF);
    } else call_rate = call_cost(call_minutes, rate_SS);

    cout << "Call rate: $" <<  call_rate << endl;
}