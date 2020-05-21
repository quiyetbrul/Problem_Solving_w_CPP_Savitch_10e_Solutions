#include <iostream>
#include "input_validation.h"

using namespace std;

void Ch1_Practice_Program_1();
void Ch1_Practice_Program_2();
void Ch1_Practice_Program_3();
void Ch1_Practice_Program_4();
void Ch1_Practice_Program_5();
void Ch1_Practice_Program_6();
void Ch1_Programming_Projects_1();
void Ch1_Programming_Projects_2();
void Ch1_Programming_Projects_3();
void Ch1_Programming_Projects_4();
void Ch1_Programming_Projects_5();

int Chapter_1() {
	do {
		cout << endl;

		cout << "Chapter 1 Solutions" << endl;
		cout << "//solutions to this chapter will not be as grand as the others" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "5. Practice_Program_5" << endl;
		cout << "6. Practice_Program_6" << endl;
		cout << "7. Project_Program_1" << endl;
		cout << "8. Project_Program_2" << endl;
		cout << "9. Project_Program_3" << endl;
		cout << "10. Project_Program_4" << endl;
		cout << "11. Project_Program_5" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;

		cout << endl;

		switch (atoi(option)) {
		case 1: Ch1_Practice_Program_1(); break;
		case 2: Ch1_Practice_Program_2(); break;
		case 3: Ch1_Practice_Program_3(); break;
		case 4: Ch1_Practice_Program_4(); break;
		case 5: Ch1_Practice_Program_5(); break;
		case 6: Ch1_Practice_Program_6(); break;
		case 7: Ch1_Programming_Projects_1(); break;
		case 8: Ch1_Programming_Projects_2(); break;
		case 9: Ch1_Programming_Projects_3(); break;
		case 10: Ch1_Programming_Projects_4(); break;
		case 11: Ch1_Programming_Projects_5(); break;
		case 0: exit(0);
		default: break;
		}
	} while (true);

	return Chapter_1();
}

void Ch1_Practice_Program_1() {
	int integerOne, integerTwo, integerSum, integerProduct;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter the first integer value: ";
	cin >> integerOne;
	cout << "Now, enter the second integer value: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;
	integerProduct = integerOne * integerTwo;

	cout << "If the first integer value is " << integerOne << " and the second value is ";
	cout << integerTwo << ", then the sum is " << integerSum << " and the product is ";
	cout << integerProduct << ".\n";

	cout << "This is the end of the program.\n";
}

void Ch1_Practice_Program_2() {
	int integerOne, integerTwo, integerSum, integerProduct;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter the first integer value: ";
	cin >> integerOne;
	cout << "Now, enter the second integer value: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;
	integerProduct = integerOne * integerTwo;

	cout << "If the first integer value is " << integerOne << " and the second value is ";
	cout << integerTwo << ", then the sum is " << integerSum << " and the product is ";
	cout << integerProduct << ".\n";

	cout << "This is the end of the program.\n";

	cout << "Good-bye\n";
}

void Ch1_Practice_Program_3() {
	cout << "EXPECTED OUTPUT WILL BE A RUN-TIME ERROR MESSAGE DUE TO DIVISION BY ZERO" << endl;
}

void Ch1_Practice_Program_4() {
	int integerOne, integerTwo, integerSum, integerProduct;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter the first integer value: ";
	cin >> integerOne;
	cout << "Now, enter the second integer value: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;
	integerProduct = integerOne + integerTwo;

	cout << "If the first integer value is " << integerOne << " and the second value is ";
	cout << integerTwo << ", then the sum is " << integerSum << " and the product is ";
	cout << integerProduct << ".\n";

	cout << "This is the end of the program.\n";

	cout << "Good-bye\n";

	//EXPECTED OUTPUT WILL HAVE A LOGIC ERROR
}

void Ch1_Practice_Program_5() {
	int integerOne, integerTwo, integerSum;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter width: ";
	cin >> integerOne;
	cout << "Enter length: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;

	cout << "Total Length: " << integerSum << endl;

	cout << "This is the end of the program.\n";

	cout << "Good-bye\n";
}

void Ch1_Practice_Program_6() {
	cout << "EXPECTED OUTPUT WILL BE DIFFERENT ERROR MESSAGES" << endl;
}

void Ch1_Programming_Projects_1() {
	int integerOne, integerTwo, integerSum, integerProduct;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter the first integer value: ";
	cin >> integerOne;
	cout << "Now, enter the second integer value: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;
	integerProduct = integerOne * integerTwo;

	cout << "If the first integer value is " << integerOne << " and the second value is ";
	cout << integerTwo << ", then the sum is " << integerSum << " and the product is ";
	cout << integerProduct << ".\n";

	cout << "This is the end of the program.\n";
}

void Ch1_Programming_Projects_2() {
	cout << "\n*************************************************\n";
	cout << "         C C C C             S S S S     !!\n";
	cout << "       C         C         S         S   !!\n";
	cout << "      C                   S              !!\n";
	cout << "     C                     S             !!\n";
	cout << "     C                       S S S S     !!\n";
	cout << "     C                              S    !!\n";
	cout << "      C                              S   !!\n";
	cout << "       C         C        S         S      \n";
	cout << "         C C C C            S S S S      00\n";
	cout << "*************************************************\n";
	cout << "       Computer Science is Cool Stuff!!!" << endl;
}

void Ch1_Programming_Projects_3() {
	double quarters, dimes, nickels, penny, total;

	cout << "Let's count your coins!\n" << "Press enter upon entering a value.\n\n";

	cout << "How many of each do you have?\n";
	cout << "Quarters: ";
	cin >> quarters;
	cout << "Dimes: ";
	cin >> dimes;
	cout << "Nickels: ";
	cin >> nickels;
	cout << "Penny: ";
	cin >> penny;

	total = .25 * quarters + .10 * dimes + .05 * nickels + .01 * penny;

	cout << "If you have " << quarters << " quarters, " << dimes << "  dimes, ";
	cout << nickels << " nickels, and ";
	cout << penny << " penny, then your total coin value is ";
	cout << "$" << total << ".\n " << "Spend wisely, human!" << endl;
}

void Ch1_Programming_Projects_4() {
	double timeSeconds, distance;
	cout << "Assume an object starts at rest then freefalls without any friction or resistance from air at 32 feet per second.\n";
	cout << "How far will the object freefall for a specific length of time?\n";
	cout << "Enter the value of time in seconds: ";
	cin >> timeSeconds;

	distance = (32 * (timeSeconds * timeSeconds)) / 2;

	cout << "\nLet's plug in the numbers into the following equation: \n";

	cout << "distance = (acceleration * (time^2)) / 2\n\n";
	//^2 = exponential power of two

	cout << distance << " = 32 * ( " << (timeSeconds) << " * " << (timeSeconds) << " ) / 2\n\n";
	//math equation with values plugged in.

	cout << "After " << timeSeconds << " seconds," << " the object will be ";
	cout << distance << " feet far from its initial position.\n";
}

void Ch1_Programming_Projects_5() {
	char character;

	cout << "Which character you'd like to see form a \"C\"? ";
	cin >> character;
	cout << "\n";

	cout << "            " << character << " " << character << " " << character << " " << character << "\n";
	cout << "          " << character << "         " << character << "\n";
	cout << "         " << character << "\n";
	cout << "        " << character << "\n";
	cout << "        " << character << "\n";
	cout << "        " << character << "\n";
	cout << "         " << character << "\n";
	cout << "          " << character << "         " << character << "\n";
	cout << "            " << character << " " << character << " " << character << " " << character << "\n";
}
