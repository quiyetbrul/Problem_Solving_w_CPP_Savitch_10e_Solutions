#include <iostream>

using namespace std;

#include "Ch5_Practice_Program_1.h"
#include "Ch5_Practice_Program_2.h"
#include "Ch5_Practice_Program_3.h"
#include "Ch5_Practice_Program_4.h"
// #include "Ch5_Practice_Program_5.h"

int Chapter_5()
{
	do
	{
		cout << endl;

		cout << "Chapter 5 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
			case 1: Ch5_Practice_Program_1(); break;
			case 2: Ch5_Practice_Program_2(); break;
			case 3: Ch5_Practice_Program_3(); break;
			case 4: Ch5_Practice_Program_4(); break;
			case 0: exit(0);
			default: cout << "Ch5_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}