#include <iostream>
#include <cmath>
#include <string>
#include <vector>
//#include "input_validation.h"

using namespace std;

void Ch3_Practice_Program_1();

int Chapter_3() {
	do {
		cout << endl;

		cout << "Chapter 3 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "NO SOLUTIONS FOUND" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;

		cout << endl;

		switch (atoi(option)) {
			// case 1: Ch3_Practice_Program_1(); break;
		case 0: exit(0);
		default: break;
		}
	} while (true);

	return Chapter_3();
}

void Ch3_Practice_Program_1() {

}