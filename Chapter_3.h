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
		cout << "1. Practice_Program_1" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;

		cout << endl;

		switch (atoi(option)) {
		case 1: Ch3_Practice_Program_1(); break;
		
		case 0: exit(0);
		default: break;
		}
	} while (true);

	return Chapter_3();
}

void Ch3_Practice_Program_1() {
	char user_1 = ' ', user_2 = ' ', ans = ' ';
	int score_1 = 0, score_2 = 0;

	do {
		user_1 = inputChar("User_1: ", "prs");
		user_2 = inputChar("User_2: ", "prs");

		cout << endl;
		cout << "===OUTCOME===" << endl;

		if (user_1 == user_2) {
			cout << "Draw" << endl << endl;
		}
		else if (user_1 == 'r' && user_2 == 's' || user_1 == 'p' && user_2 == 'r' || user_1 == 's' && user_2 == 'p') {
			score_1++;
			cout << "User_1 won" << endl << endl;
		}
		else {
			score_2++;
			cout << "User_2 won" << endl << endl;
		}

		cout << "===SCORE===" << endl;
		cout << "USER_1: " << score_1 << endl;
		cout << "USER_2: " << score_2 << endl << endl;

		ans = inputChar("Repeat? ", 'y', 'n');
	} while (ans == 'y');

}