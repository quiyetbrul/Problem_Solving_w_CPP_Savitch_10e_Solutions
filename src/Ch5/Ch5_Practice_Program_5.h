#include <iostream>

using namespace std;

void get_input_lboz_kgg(double& lb, double& oz){
    lb = inputDouble("Enter pounds: ", true);
    oz = inputDouble("Enter ounces: ", true);
}

void lboz_kgg(double& lb, double& oz){
    lb /= 2.205;
    oz *= 28.35;
}

void get_output_lboz_kgg(double& lb, double&oz){
    get_input_lboz_kgg(lb,oz);
    cout << "Before conversion: " << endl;
    cout << lb << "lbs & " << oz << " oz" << endl;
    lboz_kgg(lb,oz);
    cout << "After conversion: " << endl;
    cout << lb << "kg & " << oz << " g" << endl;
}

void Ch5_Practice_Program_5(){
    double lb = 0, oz = 0;
    get_output_lboz_kgg(lb, oz);
}