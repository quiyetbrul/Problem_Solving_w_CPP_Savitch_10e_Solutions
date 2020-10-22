#include <iostream>
#include <vector>

#include "input_validation.h"
#include "Ch2/retroactive_salary.h"

#include "Ch1/Chapter_1.cpp"
#include "Ch2/Chapter_2.cpp"
#include "Ch3/Chapter_3.cpp"

using namespace std;

int main(int argc, char** argv) {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do {
        cout << "Practice and Project Solutions" << endl;
        cout << "==============================" << endl;
        cout << "1. Chapter_1" << endl;
        cout << "2. Chapter_2" << endl;
	    cout << "3. Chapter_3" << endl;
        cout << "0. Exit" << endl;
        cout << "==============================" << endl;
        int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
        case 1: Chapter_1(); break;
        case 2: Chapter_2(); break;
        case 3: Chapter_3(); break;
        case 0: exit(0);
        default: cout << "-- ERROR MAIN MENU --" << endl;break;
        }
    } while (true);

    return 0;
}



