#include <iostream>
#include "../input_validation.h"
#include "../main.cpp"

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
		int option = inputInteger("Option: ", 0,11);

		cout << endl;

		switch (option) {
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
		case 12: main();break;
		case 0: exit(0);
		default: break;
		}
	} while (true);
}
