#include <iostream>

using namespace std;

#include "Ch5_Practice_Program_1.h"
#include "Ch5_Practice_Program_2.h"
#include "Ch5_Practice_Program_3.h"
#include "Ch5_Practice_Program_4.h"
#include "Ch5_Practice_Program_5.h"
#include "Ch5_Practice_Program_6.h"
#include "Ch5_Practice_Program_7.h"
#include "Ch5_Practice_Program_8.h"
#include "Ch5_Practice_Program_9.h"
#include "Ch5_Programming_Project_1.h"
#include "Ch5_Programming_Project_2.h"

int Chapter_5(){
	do{
		cout << endl;
		
		cout << "Chapter 5 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "5. Practice_Program_5" << endl;
		cout << "6. Practice_Program_6" << endl;
		cout << "7. Practice_Program_7" << endl;
		cout << "8. Practice_Program_8" << endl;
		cout << "9. Practice_Program_9" << endl;
		cout << "10. Programming_Project_1" << endl;
		cout << "11. Programming_Project_2" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 19);

		cout << endl;

		switch (option) {
			case 1: Ch5_Practice_Program_1(); break;
			case 2: Ch5_Practice_Program_2(); break;
			case 3: Ch5_Practice_Program_3(); break;
			case 4: Ch5_Practice_Program_4(); break;
			case 5: Ch5_Practice_Program_5(); break;
			case 6: Ch5_Practice_Program_6(); break;
			case 7: Ch5_Practice_Program_7(); break;
			case 8: Ch5_Practice_Program_8(); break;
			case 9: Ch5_Practice_Program_9(); break;
			case 10: Ch5_Programming_Project_1(); break;
			case 11: Ch5_Programming_Project_2(); break;
			case 0: exit(0);
			default: cout << "Ch5_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}