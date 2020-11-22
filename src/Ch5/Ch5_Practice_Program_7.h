#include <iostream>

using namespace std;

void get_output_kgg_lboz(double& lbkg, double& ozg);
void get_output_lboz_kgg(double& lbkg, double& ozg);

void get_input_lbkg(double& lbkg, double& ozg, int& switch_trigger){
    switch_trigger = inputInteger("Convert 1-Imperial(kg&g to lb&oz) or 2-Metric(ft&in to m&cm): ", 1,2);
    if(switch_trigger == 1){
        get_output_kgg_lboz(lbkg,ozg);
    }else{
        get_output_lboz_kgg(lbkg,ozg);
    }
}

void Ch5_Practice_Program_7(){
    double lbkg = 0, ozg = 0;
    int switch_trigger;

    get_input_lbkg(lbkg,ozg,switch_trigger);
}