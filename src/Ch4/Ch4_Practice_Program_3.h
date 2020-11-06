#include <iostream>

using namespace std;

double find_price_per_stock(int shares_owned, int whole_dollar, int numerator, int denominator){
    return (whole_dollar + (static_cast<double>(numerator) / denominator)) / shares_owned;
}

void Ch4_Practice_Program_3(){

    double shares_owned = inputDouble("Enter number of shares owned: ", true);
    int whole_dollar = inputInteger("Enter whole dollar: ", true);
    int numerator = inputInteger("Enter numerator: ", true);
    int denominator = inputInteger("Enter denominator: ", true);

    cout << "Price per stock: " << find_price_per_stock(shares_owned, whole_dollar, numerator, denominator) << endl;
}