#include <iostream>

using namespace std;

void Ch3_Programming_Project_12(){

    int toothpicks = 23;

    do{
        int user = inputInteger("User picks up toothpicks: #", 1, 3);
        toothpicks -= user;

        // get random number between 1-3;
        // int comp = inputInteger("Computer picks up toothpicks: #");
        
    }while(toothpicks > 4)
    

}