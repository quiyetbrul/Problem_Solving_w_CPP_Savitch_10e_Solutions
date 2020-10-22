#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#include "Ch3_Practice_Program_1.h"
#include "Ch3_Practice_Program_2.h"
#include "Ch3_Practice_Program_3.h"
#include "Ch3_Practice_Program_4.h"
#include "Ch3_Practice_Program_5.h"


using namespace std;

int Chapter_3()
{
	do
	{
		cout << endl;

		cout << "Chapter 3 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "5. Practice_Program_5" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		int option = inputInteger("Option: ", 0, 5);

		cout << endl;

		switch (option) {
		case 1:
			Ch3_Practice_Program_1();
			break;
		case 2:
			Ch3_Practice_Program_2();
			break;
		case 3:
			Ch3_Practice_Program_3();
			break;
		case 4:
			Ch3_Practice_Program_4();
			break;
		case 5:
			Ch3_Practice_Program_5();
			break;
		case 0:
			exit(0);
		default:
			break;
		}
	} while (true);
}