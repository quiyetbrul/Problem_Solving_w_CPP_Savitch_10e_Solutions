#include <iostream>

using namespace std;

void get_input_kgg_lboz(double& kg, double& g){
    kg = inputDouble("Enter kilograms: ", true);
    g = inputDouble("Enter grams: ", true);
}

void kgg_lboz(double& kg, double& g){
    kg *= 2.205;
    g /= 28.35;
}

void get_output_kgg_lboz(double& kg, double&g){
    get_input_kgg_lboz(kg,g);
    cout << "Before conversion: " << endl;
    cout << kg << "kg & " << g << " g" << endl;
    kgg_lboz(kg,g);
    cout << "After conversion: " << endl;
    cout << kg << "lbs & " << g << " oz" << endl;
}

void Ch5_Practice_Program_6(){
    double kg = 0, g = 0;
    get_output_kgg_lboz(kg, g);
}