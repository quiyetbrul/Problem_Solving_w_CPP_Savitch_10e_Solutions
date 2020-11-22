#include <iostream>

using namespace std;

#include "Ch5_Practice_Program_1.h"

int Chapter_5()
{
	do
	{
		cout << endl;

		cout << "Chapter 5 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
		case 1: Ch5_Practice_Program_1();
		case 0: exit(0);
		default: cout << "Ch5_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}