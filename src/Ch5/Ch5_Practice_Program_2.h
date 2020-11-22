#include <iostream>

using namespace std;

void get_input_imperial(double& feet, double& inches){
    feet = inputDouble("Enter feet: ", true);
    inches = inputDouble("Enter inches: ", true);
}

void ftin_mcm(double& feet, double& inches){
    feet /= 3.281;
    inches *= 2.54;
}

void get_output_imperial(double& feet, double&inches){
    get_input_imperial(feet,inches);
    cout << "Before conversion: " << endl;
    cout << feet << "ft & " << inches << " in" << endl;
    ftin_mcm(feet,inches);
    cout << "After conversion: " << endl;
    cout << feet << "m & " << inches << " cm" << endl;
}

void Ch5_Practice_Program_2(){
    double feet = 0, inches = 0;
    get_output_imperial(feet, inches);
}