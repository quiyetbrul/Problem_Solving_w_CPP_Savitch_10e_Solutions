#include <iostream>

using namespace std;

void Ch5_Practice_Program_1(){
    char ans = ' ';

    do
    {
        

        ans = inputChar("Repeat? (y/n) ", 'y', 'n');
    } while (ans == 'y');
    
}