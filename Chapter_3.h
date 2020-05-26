#include <iostream>
#include <cmath>
#include <string>
#include <vector>
//#include "input_validation.h"

using namespace std;

void Ch3_Practice_Program_1();
void Ch3_Practice_Program_2();
void Ch3_Practice_Program_3();


int Chapter_3() {
	do {
		cout << endl;

		cout << "Chapter 3 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;

		cout << endl;

		switch (atoi(option)) {
		case 1: Ch3_Practice_Program_1(); break;
		case 2: Ch3_Practice_Program_2(); break;
		case 3: Ch3_Practice_Program_3(); break;
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

void Ch3_Practice_Program_2() {
	char ans = ' ';
	do {
		double account_balance = inputDouble("Enter account balance: ", true);
		double interest = 0.0;

		account_balance <= 1000 ? interest = 1.5 : interest = 1.0;

		double total_amount_due = account_balance + (account_balance * (interest / 100));

		double minimum_payment = 0.0;

		total_amount_due <= 10 ? minimum_payment = total_amount_due : minimum_payment = total_amount_due * 10 / 100;

		cout << "Total amount due: " << total_amount_due << endl;
		cout << "Minimum payment: " << minimum_payment << endl;

		ans = inputChar("Repeat? ", 'y', 'n');
		cout << endl;
	} while (ans == 'y');
}

void Ch3_Practice_Program_3() {
  string birth_month;
  int birth_day = 0;

  inputString("Enter birth month: ", birth_month);
  birth_day = inputInteger("Enter birth date: ", true);
}
