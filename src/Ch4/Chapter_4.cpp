#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

#include "Ch4_Practice_Program_1.h"
#include "Ch4_Practice_Program_2.h"
#include "Ch4_Practice_Program_3.h"
#include "Ch4_Practice_Program_4.h"
#include "Ch4_Practice_Program_5.h"
#include "Ch4_Practice_Program_6.h"
#include "Ch4_Practice_Program_7.h"
#include "Ch4_Practice_Program_8.h"
#include "Ch4_Practice_Program_9.h"
#include "Ch4_Programming_Project_1.h"
#include "Ch4_Programming_Project_2.h"
#include "Ch4_Programming_Project_3.h"
#include "Ch4_Programming_Project_4.h"
// #include "Ch4_Programming_Project_5.h"
// #include "Ch4_Programming_Project_6.h"
// #include "Ch4_Programming_Project_7.h"
// #include "Ch4_Programming_Project_8.h"
// #include "Ch4_Programming_Project_9.h"
// #include "Ch4_Programming_Project_10.h"


int Chapter_4()
{
	do
	{
		cout << endl;

		cout << "Chapter 4 Solutions" << endl;
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
		cout << "12. Programming_Project_3" << endl;
		cout << "13. Programming_Project_4" << endl;
		cout << "14. Programming_Project_5" << endl;
		cout << "15. Programming_Project_6" << endl;
		cout << "16. Programming_Project_7" << endl;
		cout << "17. Programming_Project_8" << endl;
		cout << "18. Programming_Project_9" << endl;
		cout << "19. Programming_Project_10" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
		case 1: Ch4_Practice_Program_1(); break;
		case 2: Ch4_Practice_Program_2(); break;
		case 3: Ch4_Practice_Program_3(); break;
		case 4: Ch4_Practice_Program_4(); break;
		case 5: Ch4_Practice_Program_5(); break;
		case 6: Ch4_Practice_Program_6(); break;
		case 7: Ch4_Practice_Program_7(); break;
		case 8: Ch4_Practice_Program_8(); break;
		case 9: Ch4_Practice_Program_9(); break;
		case 10: Ch4_Programming_Project_1(); break;
		case 11: Ch4_Programming_Project_2(); break;
		case 12: Ch4_Programming_Project_3(); break;
		case 13: Ch4_Programming_Project_4(); break;
		// case 14: Ch4_Programming_Project_5(); break;
		// case 15: Ch4_Programming_Project_6(); break;
		// case 16: Ch4_Programming_Project_7(); break;
		// case 17: Ch4_Programming_Project_8(); break;
		// case 18: Ch4_Programming_Project_9(); break;
		// case 19: Ch4_Programming_Project_10(); break;
		case 0: exit(0);
		default: cout << "Ch4_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}