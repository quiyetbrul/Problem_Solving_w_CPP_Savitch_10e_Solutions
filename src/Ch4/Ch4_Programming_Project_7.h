#include <iostream>

using namespace std;

double compute_difference(int starting_hour, int starting_minute, int ending_hour, int ending_minute, bool starting_meridiem, bool ending_meridiem){

    return 0;
}


/*
    -one way of solving this problem is to first figure out if it's AM/PM
        and then change the time into military time and multiply everything by 60
        to then get the difference
            --potential problem is getting difference between days
*/

void Ch4_Programming_Project_7(){
    int starting_hour = inputInteger("Starting hour: ", 1,12);
    int starting_minute = inputInteger("Starting minute: ", 1,60);
    bool starting_meridiem, ending_meridiem;
    
}