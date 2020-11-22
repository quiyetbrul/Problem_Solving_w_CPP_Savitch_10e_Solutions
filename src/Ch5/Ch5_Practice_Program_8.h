#include <iostream>

using namespace std;

void get_input_ftinmcm(double& ftm, double& incm, int& switch_trigger);
void get_input_lbkg(double& lbkg, double& ozg, int& switch_trigger);

void prompt_choice(double& input1, double& input2, int switch_trigger){
    switch_trigger = inputInteger("Convert 1-ftin&mcm or 2-lboz&kgg: ", 1,2);
    if(switch_trigger == 1){
        get_input_ftinmcm(input1,input2,switch_trigger);
    }else{
        get_input_lbkg(input1,input2,switch_trigger);
    }
}

void Ch5_Practice_Program_8(){
    double input1 = 0, input2 = 0;
    int switch_trigger = 0;

    prompt_choice(input1, input2, switch_trigger);
}