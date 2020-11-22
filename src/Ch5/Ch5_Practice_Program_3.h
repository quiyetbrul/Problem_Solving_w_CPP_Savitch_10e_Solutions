#include <iostream>

using namespace std;

void get_input_metric(double& meters, double& centimeters){
    meters = inputDouble("Enter meters: ", true);
    centimeters = inputDouble("Enter centimeters: ", true);
}

void mcm_ftin(double& meters, double& centimeters){
    meters *= 3.281;
    centimeters /= 2.54;
}

void get_output_metric(double& meters, double&centimeters){
    get_input_metric(meters,centimeters);
    cout << "Before conversion: " << endl;
    cout << meters << "m & " << centimeters << " cm" << endl;
    mcm_ftin(meters,centimeters);
    cout << "After conversion: " << endl;
    cout << meters << "ft & " << centimeters << " in" << endl;
}

void Ch5_Practice_Program_3(){
    double meters = 0, centimeters = 0;
    get_output_metric(meters, centimeters);
}