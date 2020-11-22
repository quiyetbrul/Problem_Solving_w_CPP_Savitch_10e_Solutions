#include <iostream>

using namespace std;

void get_output_mcm_ftin(double& ftm, double& incm);
void get_output_ftin_mcm(double& ftm, double& incm);

void get_input_ftinmcm(double& ftm, double& incm, int& switch_trigger){
    switch_trigger = inputInteger("Convert 1-Imperial(m&cm to ft&in) or 2-Metric(ft&in to m&cm): ", 1,2);
    if(switch_trigger == 1){
        get_output_mcm_ftin(ftm,incm);
    }else{
        get_output_ftin_mcm(ftm,incm);
    }
}

void Ch5_Practice_Program_4(){
    double ftm = 0, incm = 0;
    int switch_trigger;

    get_input_ftinmcm(ftm,incm,switch_trigger);
}