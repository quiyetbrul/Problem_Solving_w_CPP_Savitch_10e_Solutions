#include <iostream>
#include <vector>

#include "input_validation.h"
#include "random_number.h"
#include "Ch2/retroactive_salary.h"
#include "Ch4/find_mpg.h"

#include "Ch1/Chapter_1.cpp"
#include "Ch2/Chapter_2.cpp"
#include "Ch3/Chapter_3.cpp"
#include "Ch4/Chapter_4.cpp"
#include "Ch5/Chapter_5.cpp"

using namespace std;

int main(int argc, char** argv) {

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    srand(time(NULL));

    do {
        cout << "Practice and Project Solutions" << endl;
        cout << "==============================" << endl;
        cout << "1. Chapter_1" << endl;
        cout << "2. Chapter_2" << endl;
	    cout << "3. Chapter_3" << endl;
        cout << "4. Chapter_4" << endl;
        cout << "5. Chapter_5" << endl;
        cout << "0. Exit" << endl;
        cout << "==============================" << endl;
        int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
        case 1: Chapter_1(); break;
        case 2: Chapter_2(); break;
        case 3: Chapter_3(); break;
        case 4: Chapter_4(); break;
        case 5: Chapter_5(); break;
        case 0: exit(0);
        default: cout << "-- ERROR MAIN MENU --" << endl << endl; break;
        }
    } while (true);

    return 0;
}



