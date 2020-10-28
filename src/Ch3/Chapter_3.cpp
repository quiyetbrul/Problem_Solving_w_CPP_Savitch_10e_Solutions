#include <iostream>
#include <cmath>
#include <string>
#include <vector>

#include "Ch3_Practice_Program_1.h"
#include "Ch3_Practice_Program_2.h"
#include "Ch3_Practice_Program_3.h"
#include "Ch3_Practice_Program_4.h"
#include "Ch3_Practice_Program_5.h"
#include "Ch3_Practice_Program_6.h"
#include "Ch3_Practice_Program_7.h"
#include "Ch3_Programming_Project_1.h"
#include "Ch3_Programming_Project_2.h"
#include "Ch3_Programming_Project_3.h"
#include "Ch3_Programming_Project_4.h"
#include "Ch3_Programming_Project_5.h"
#include "Ch3_Programming_Project_6.h"
#include "Ch3_Programming_Project_7.h"
#include "Ch3_Programming_Project_8.h"
#include "Ch3_Programming_Project_9.h"
#include "Ch3_Programming_Project_10.h"
#include "Ch3_Programming_Project_11.h"

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
		cout << "6. Practice_Program_6" << endl;
		cout << "7. Practice_Program_7" << endl;
		cout << "8. Programming_Project_1" << endl;
		cout << "9. Programming_Project_2" << endl;
		cout << "10. Programming_Project_3" << endl;
		cout << "11. Programming_Project_4" << endl;
		cout << "12. Programming_Project_5" << endl;
		cout << "13. Programming_Project_6" << endl;
		cout << "14. Programming_Project_7" << endl;
		cout << "15. Programming_Project_8" << endl;
		cout << "16. Programming_Project_9" << endl;
		cout << "17. Programming_Project_10" << endl;
		cout << "18. Programming_Project_11" << endl;
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		int option = inputInteger("Option: ", 0, 21);

		cout << endl;

		switch (option) {
		case 1: Ch3_Practice_Program_1(); break;
		case 2: Ch3_Practice_Program_2(); break;
		case 3: Ch3_Practice_Program_3(); break;
		case 4: Ch3_Practice_Program_4(); break;
		case 5: Ch3_Practice_Program_5(); break;
		case 6: Ch3_Practice_Program_6(); break;
		case 7: Ch3_Practice_Program_7(); break;
		case 8: Ch3_Programming_Project_1(); break;
		case 9: Ch3_Programming_Project_2(); break;
		case 10: Ch3_Programming_Project_3(); break;
		case 11: Ch3_Programming_Project_4(); break;
		case 12: Ch3_Programming_Project_5(); break;
		case 13: Ch3_Programming_Project_6(); break;
		case 14: Ch3_Programming_Project_7(); break;
		case 15: Ch3_Programming_Project_8(); break;
		case 16: Ch3_Programming_Project_9(); break;
		case 17: Ch3_Programming_Project_10(); break;
		case 18: Ch3_Programming_Project_11(); break;
		case 0: exit(0);
		default: cout << "Ch3_Menu: ERROR SELECTION" << endl; break;
		}
	} while (true);
}