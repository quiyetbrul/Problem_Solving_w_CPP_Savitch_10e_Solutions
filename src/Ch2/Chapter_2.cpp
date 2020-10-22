#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#include "Ch2_Practice_Program_1.h"
#include "Ch2_Practice_Program_2.h"
#include "Ch2_Practice_Program_3.h"
#include "Ch2_Practice_Program_4.h"
#include "Ch2_Practice_Program_5.h"
#include "Ch2_Programming_Project_1.h"
#include "Ch2_Programming_Project_2.h"
#include "Ch2_Programming_Project_3.h"
#include "Ch2_Programming_Project_4.h"
#include "Ch2_Programming_Project_5.h"
#include "Ch2_Programming_Project_6.h"
#include "Ch2_Programming_Project_7.h"
#include "Ch2_Programming_Project_8.h"
#include "Ch2_Programming_Project_9.h"
#include "Ch2_Programming_Project_10.h"
#include "Ch2_Programming_Project_11.h"
#include "Ch2_Programming_Project_12.h"
#include "Ch2_Programming_Project_13.h"
#include "Ch2_Programming_Project_14.h"
#include "Ch2_Programming_Project_15.h"
#include "Ch2_Programming_Project_16.h"

using namespace std;

// some IDE/editor does not support M_PI definition
// const double M_PI = 3.14159265359;

int Chapter_2() {
	do {
		cout << endl;

		cout << "Chapter 2 Solutions" << endl;
		cout << "==============================" << endl;
		cout << "1. Practice_Program_1" << endl;
		cout << "2. Practice_Program_2" << endl;
		cout << "3. Practice_Program_3" << endl;
		cout << "4. Practice_Program_4" << endl;
		cout << "5. Practice_Program_5" << endl;
		cout << "6. Programming_Project_1" << endl;
		cout << "7. Programming_Project_2" << endl;
		cout << "8. Programming_Project_3" << endl;
		cout << "9. Programming_Project_4" << endl;
		cout << "10. Programming_Project_5" << endl;
		cout << "11. Programming_Project_6" << endl;
		cout << "12. Programming_Project_7" << endl;
		cout << "13. Programming_Project_8" << endl;
		cout << "14. Programming_Project_9" << endl;
		cout << "15. Programming_Project_10" << endl;
		cout << "16. Programming_Project_11" << endl;
		cout << "17. Programming_Project_12" << endl;
		cout << "18. Programming_Project_13" << endl;
		cout << "19. Programming_Project_14" << endl;
		cout << "20. Programming_Project_15" << endl;
		cout << "21. Programming_Project_16" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
		case 1: Ch2_Practice_Program_1(); break;
		case 2: Ch2_Practice_Program_2(); break;
		case 3: Ch2_Practice_Program_3(); break;
		case 4: Ch2_Practice_Program_4(); break;
		case 5: Ch2_Practice_Program_5(); break;
		case 6: Ch2_Programming_Project_1(); break;
		case 7: Ch2_Programming_Project_2(); break;
		case 8: Ch2_Programming_Project_3(); break;
		case 9: Ch2_Programming_Project_4(); break;
		case 10: Ch2_Programming_Project_5(); break;
		case 11: Ch2_Programming_Project_6(); break;
		case 12: Ch2_Programming_Project_7(); break;
		case 13: Ch2_Programming_Project_8(); break;
		case 14: Ch2_Programming_Project_9(); break;
		case 15: Ch2_Programming_Project_10(); break;
		case 16: Ch2_Programming_Project_11(); break;
		case 17: Ch2_Programming_Project_12(); break;
		case 18: Ch2_Programming_Project_13(); break;
		case 19: Ch2_Programming_Project_14(); break;
		case 20: Ch2_Programming_Project_15(); break;
		case 21: Ch2_Programming_Project_16(); break;
		case 0: exit(0);
		default: cout << "Ch2_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}

