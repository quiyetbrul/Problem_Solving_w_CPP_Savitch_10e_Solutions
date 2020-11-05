#include <iostream>

using namespace std;

void Ch4_Practice_Program_1(){
    double liters_consumed = inputDouble("Enter liter(s) of gasoline consumbed by the car: ", true);
    double miles_driven = inputDouble("Enter miles driven by the car: ", true);

    double one_liter = 0.264179;
    double gallons = liters_consumed * one_liter;

    cout << "Miles per gallon the car delivered: " << find_mpg(miles_driven, gallons) << endl;
}