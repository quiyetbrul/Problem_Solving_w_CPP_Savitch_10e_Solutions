#include <iostream>

using namespace std;

void get_input(double& feet, double& inches){
    feet = inputDouble("Enter feet: ", true);
    inches = inputDouble("Enter inches: ", true);
}

void mcm_ftin(double& feet, double& inches){
    feet /= 3.281;
    inches *= 2.54;
}

void get_output(double& feet, double&inches){
    get_input(feet,inches);
    cout << "Before conversion: " << endl;
    cout << feet << "ft & " << inches << " in" << endl;
    mcm_ftin(feet,inches);
    cout << "After conversion: " << endl;
    cout << feet << "m & " << inches << " cm" << endl;
}

void Ch5_Practice_Program_2(){
    double feet = 0, inches = 0;
    get_output(feet, inches);
}