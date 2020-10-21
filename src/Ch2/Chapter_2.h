#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "../input_validation.h"

using namespace std;

void Ch2_Practice_Program_1();
void Ch2_Practice_Program_2();
void Ch2_Practice_Program_3();
void Ch2_Practice_Program_4();
void Ch2_Practice_Program_5();
double compute_lab(double mass_sweetner, double mass_mouse, double mass_dieter);
void Ch2_Programming_Project_1();
void retroactive_salary(int months, double current_annual_salary);
void Ch2_Programming_Project_2();
void Ch2_Programming_Project_3();
void Ch2_Programming_Project_4();
void Ch2_Programming_Project_5();
void Ch2_Programming_Project_6();
void Ch2_Programming_Project_7();
void Ch2_Programming_Project_8();
void Ch2_Programming_Project_9();
void Ch2_Programming_Project_10();
void Ch2_Programming_Project_11();
void Ch2_Programming_Project_12();
void Ch2_Programming_Project_13();
void Ch2_Programming_Project_14();
void Ch2_Programming_Project_15();
void Ch2_Programming_Project_16();

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
		default: break;
		}
	} while (true);

	return Chapter_2();
}

void retroactive_salary(int months, double current_annual_salary) {
	const double PAY_INCREASE = 0.076;

	current_annual_salary = 0.0;
	double retroactive_pay = (current_annual_salary / 12) * PAY_INCREASE * months;

	double new_annual_salary = current_annual_salary + (current_annual_salary * PAY_INCREASE);

	double new_monthyly_salary = new_annual_salary / 12;

	cout << "\nThe new montly salary is $" << new_monthyly_salary;
	cout << " with a retroactive pay of $" << retroactive_pay;
	cout << ", amounting to $" << new_annual_salary << " annually.\n\n";
}