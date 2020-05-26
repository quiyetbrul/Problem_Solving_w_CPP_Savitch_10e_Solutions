/*
 * File:   main.cpp
 * Author: quiyetbrul
 *
 * Created on May 12, 2020, 8:34 AM
 */

#include <cstdlib>
#include <iostream>
#include "input_validation.h"
#include "Chapter_1.h"
#include "Chapter_2.h"
#include "Chapter_3.h"

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
        cout << "Option : ";

        char option[80];
        cin >> option;

        switch (atoi(option)) {
        case 1: Chapter_1(); break;
        case 2: Chapter_2(); break;
        case 3: Chapter_3(); break;
        case 0: exit(0);
        default: break;
        }
    } while (true);

    return 0;
}



