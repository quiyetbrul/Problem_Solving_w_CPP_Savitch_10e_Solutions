#include <iostream>

using namespace std;

void Ch3_Programming_Project_12(){

    int toothpicks = 23;

    cout << "Game of \"23\"" << endl;
    cout << "NUMBER OF TOOTHPICKS LEFT: " << toothpicks << endl  << endl;

    do{
        int user = inputInteger("User picks up toothpicks: ", 1, 3);
        toothpicks -= user;

        if (toothpicks > 4){
            int comp = 4 - user;
            cout << "Computer picks up toothpicks: " << comp << endl;
            toothpicks -= comp;
            cout << "NUMBER OF TOOTHPICKS LEFT: " << toothpicks << endl  << endl;
        }else if(toothpicks >= 2 && toothpicks <= 4){
            int comp = 0;
            while(toothpicks > 1) {
                toothpicks--; comp++;
            }
            cout << "Computer picks up toothpicks: " << comp << endl;
            cout << "NUMBER OF TOOTHPICKS LEFT: " << toothpicks << endl  << endl;
            cout << "Computer wins" << endl; break;
        }else if (toothpicks == 1){
            cout << "Computer picks up the last toothpick" << endl;
            cout << "User wins" << endl;
            toothpicks = 0;
        }
    }while(toothpicks > 0);
}