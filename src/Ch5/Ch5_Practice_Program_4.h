#include <iostream>

using namespace std;

void get_input(double& ftm, double& incm, bool& switch_trigger){
    switch_trigger = inputInteger("Convert 0-Imperial(ft&in to m&cm) or 1-Metric(m&cm to ftin): ", 0,1);
    if(switch_trigger){
        ftm = inputDouble("Enter meter: ", true);
        incm = inputDouble("Enter centimeter: ", true);
    }else{
        ftm = inputDouble("Enter feet: ", true);
        incm = inputDouble("Enter inches: ", true);
    }
}

void mcm_ftin(double& ftm, double& incm);
void ftin_mcm(double& ftm, double& incm);

void get_output(double& ftm, double& incm, bool& switch_trigger){
    get_input(ftm,incm,switch_trigger);
    if(switch_trigger){
        cout << "Before conversion: " << endl;
        cout << ftm << "m & " << incm << " cm" << endl;
        mcm_ftin(ftm,incm);
        cout << "After conversion: " << endl;
        cout << ftm << "ft & " << incm << " in" << endl;
    }else{
        cout << "Before conversion: " << endl;
        cout << ftm << "ft & " << incm << " in" << endl;
        ftin_mcm(ftm,incm);
        cout << "After conversion: " << endl;
        cout << ftm << "m & " << incm << " cm" << endl;
    }
}

void Ch5_Practice_Program_4(){
    double ftm = 0, incm = 0;
    bool switch_trigger;

    get_output(ftm,incm,switch_trigger);
}