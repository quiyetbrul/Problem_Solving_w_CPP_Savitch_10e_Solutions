#include <iostream>

using namespace std;

void Ch4_Practice_Program_2(){
    double one_liter = 0.264179;

    int car_mpg[2];
    double liters_consumed[2];
    double miles_driven[2];
    double gallons[2];

    for(int i = 0; i < 2; i++){
        cout << "Car #" << i+1 << endl;

        liters_consumed[i] = inputDouble("Enter liter(s) of gasoline consumbed by the car: ", true);
        miles_driven[i] = inputDouble("Enter miles driven by the car: ", true);

        gallons[i] = liters_consumed[i] * one_liter;
        cout << "Liters in gallons: " << gallons[i];

        car_mpg[i] = find_mpg(miles_driven[i], gallons[i]);
        cout << "Mile(s) per gallon car #" << i+1 << " delivered: " << car_mpg[i];

        cout << endl;
    }
    cout << endl;

    cout << (car_mpg[0] > car_mpg[1] ? "Car #1 has better mpg." : "Car #2 has better mpg.");

    cout << endl;
}