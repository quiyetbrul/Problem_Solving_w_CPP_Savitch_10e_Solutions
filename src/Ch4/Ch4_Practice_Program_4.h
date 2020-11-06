#include <iostream>

using namespace std;

double inflation_rate(double price_before, double price_now){
    return ((abs)(price_now - price_before)) / price_before * 100;
}

void Ch4_Practice_Program_4(){
    // price now - price before / price before
    double price_before = inputDouble("Enter price before: ", true);
    double price_now = inputDouble("Enter price now: ", true);

    cout << "Inflation rate: " << inflation_rate(price_before, price_now) << "%" << endl;
}