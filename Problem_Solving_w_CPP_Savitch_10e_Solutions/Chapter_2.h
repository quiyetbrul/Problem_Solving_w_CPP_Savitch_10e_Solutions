#include <iostream>
#include <cmath>

void Ch2_Practice_Program_1();
void Ch2_Practice_Program_2();
void Ch2_Practice_Program_3();
string User_Input(string prompt, string input);
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
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;
		
		cout << endl;
		
		switch (atoi(option)) {
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
			case 0: exit(0);
			default: break;
		}
	} while (true);
	
	return Chapter_2();
}

void Ch2_Practice_Program_1() {
	char ans;
	double cereal_weight = 0.0;
	int cereal_boxes = 0.0;
	
	//repetition structure
	do {
		//prompt user for cereal weight
		cereal_weight = inputDouble("Enter cereal weight(oz): ", true);
		
		//prompt user for cereal boxes
		cereal_boxes = inputInteger("Enter number of boxes: ", true);
		
		//prompt user for iteration
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}

void Ch2_Practice_Program_2() {
	double n = 0.0, r = 0.0, guess = 0.0, previous_guess = 0.0;
	
	//prompt user for a number to find the square root
	n = inputInteger("Enter a number to find the square root: ", true);
	
	//assign initial guess
	guess = n / 2;
	
	//repetition structure
	do {
		r = n / guess;
		previous_guess = guess;
		guess = (guess + r) / 2;
	} while (previous_guess - guess > 0.01 * previous_guess);
	
	//display result
	cout << "Square root approximation of " << n << " is " << guess << endl;
}

void Ch2_Practice_Program_3() {
	double initial_mph = 0.0;
	double get_minutes = 0.0;
	int get_seconds = 0;
	
	//prompt user for mph
	initial_mph = inputDouble("Enter mph: ", true);
	
	//mph conversion into pace
	
	//double minute value include seconds as decimals
	get_minutes = 60 / initial_mph;
	
	//cast double minute value into an integer
	//then subtract from double minute value
	get_seconds = (get_minutes - (int) get_minutes) * 60;
	
	//display result
	cout << initial_mph << " mph is " << (int) get_minutes << " minute(s) and " << get_seconds << " second(s)" << endl;
}

string User_Input(string prompt, string input) {
	cout << prompt;
	cin >> input;
	
	return input;
}

void Ch2_Practice_Program_4() {
	string instructor_name = "",
	user_name = "",
	food = "",
	adjective = "",
	color = "",
	animal = "";
	double number = 0.0;
	
	//prompt user for instructor surname,
	//user's name, a food, a number between 100-120,
	//an adjective, a color, an animal
	
	instructor_name = User_Input("Enter instructor's surname: ", instructor_name);
	user_name = User_Input("Enter your name: ", user_name);
	food = User_Input("Enter a food: ", food);
	number = inputInteger("Enter a number: ", 100, 120);
	adjective = User_Input("Enter an adjective: ", adjective);
	color = User_Input("Enter a color: ", color);
	animal = User_Input("Enter an animal: ", animal);
	
	//display message
	cout << endl << "Dear Instructor " << instructor_name << "," << endl
	<< "I am sorry that I am unable to turn in my homework at this time. " << endl
	<< "First, I ate a rotten " << food << ", which made me turn " << color << " and extremely ill." << endl
	<< "I came down with a fever of " << number << "." << endl
	<< "Next, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food
	<< " on my homework, because he ate it." << endl
	<< "I am currently rewriting my homework and hope you will accept it late." << endl
	<< "Sincerely, " << endl << user_name << endl;
}

void Ch2_Practice_Program_5() {
	double radius = 0.0, sphere_volume = 0.0;
	
	radius = inputDouble("Enter radius of sphere: ", true);
	sphere_volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
	
	cout << "Sphere volume: " << sphere_volume << endl;
}

double compute_lab(double mass_sweetner, double mass_mouse, double mass_dieter) {
	return (mass_dieter * (mass_sweetner / mass_mouse));
}

void Ch2_Programming_Project_1() {
	char ans = ' ';
	double mass_sweetner = 0.0, mass_mouse = 0.0, mass_dieter = 0.0, number_soda = 0.0;
	const double PERCENT = 0.001;
	
	do {
		mass_sweetner = inputDouble("Sweetner mass required to kill a mouse: ", true);
		mass_mouse = inputDouble("Mouse mass: ", true);
		mass_dieter = inputDouble("Dieter mass: ", true);
		
		number_soda = compute_lab(mass_sweetner, mass_mouse, mass_dieter) / (mass_sweetner * PERCENT);
		cout << "Soda pop limit: " << (ceil(number_soda) - 1) << endl;
		
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}

const double PAY_INCREASE = 0.076;

void retroactive_salary(int months, double current_annual_salary) {
	current_annual_salary = 0.0;
	double retroactive_pay = (current_annual_salary / 12) * PAY_INCREASE * months;
	
	double new_annual_salary = current_annual_salary + (current_annual_salary * PAY_INCREASE);
	
	double new_monthyly_salary = new_annual_salary / 12;
	
	cout << "\nThe new montly salary is $" << new_monthyly_salary;
	cout << " with a retroactive pay of $" << retroactive_pay;
	cout << ", amounting to $" << new_annual_salary << " annually.\n\n";
}

void Ch2_Programming_Project_2() {
	int months = 6;
	char ans = ' ';
	double current_annual_salary = 0.0;
	
	do {
		current_annual_salary = inputDouble("Enter annual salary", true);
		
		retroactive_salary(months, current_annual_salary);
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}

void Ch2_Programming_Project_3() {
	int months = 0;
	char ans = ' ';
	double current_annual_salary = 0.0;
	
	do {
		months = inputInteger("Enter month(s): ", true);
		current_annual_salary = inputDouble("Enter annual salary: ", true);
		
		retroactive_salary(months, current_annual_salary);
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
}

void Ch2_Programming_Project_4() {
	double loan_face_value = 0.0,
	loan_interest_rate = 0.0;
	int loan_duration_months = 0;
	
	char ans = ' ';
	
	do {
		
		loan_face_value = inputDouble("Enter loan needed: ", true);
		loan_interest_rate = inputDouble("Enter interest rate: ", true);
		loan_duration_months = inputInteger("Enter loan duration (months): ", true);
		
		double loan_interest_yield = 0.0,
		loan_duration_years = 0.0,
		loan_interest_annual = 0.0,
		loan_face_value_new = 0.0,
		loan_payment_monthly = 0.0;
		
		//find loan interest yielded for the loan duration
		loan_interest_yield = loan_face_value * (loan_interest_rate / 100);
		
		//convert months into years
		loan_duration_years = loan_duration_months / 12;
		
		//find total interest owed
		loan_interest_annual = loan_interest_yield * loan_duration_years;
		
		//find new loan face value
		loan_face_value_new = loan_face_value - loan_interest_annual;
		
		//find monthly loan payment
		loan_payment_monthly = loan_face_value / loan_duration_months;
		
		cout << endl;
		
		cout << "Loan required: " << loan_face_value << endl;
		cout << "Loan duration (months): " << loan_duration_months << endl;
		cout << "Interest rate: " << loan_interest_rate << endl;
		cout << "Interest yielded: " << loan_interest_yield << endl;
		cout << "Loan received after interest: " << loan_face_value_new << endl;
		cout << "Monthly payment: " << loan_payment_monthly << endl;
		
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
	} while (ans == 'y');
	
}

void Ch2_Programming_Project_5() {
	int max_room_capacity = 0, number_of_attendees = 0, open_seats = 0;
	char ans = ' ';
	
	do {
		max_room_capacity = inputInteger("Max room capacity: ", true);
		number_of_attendees = inputInteger("Present attendees: ", true);
		
		open_seats = max_room_capacity - number_of_attendees;
		
		if (number_of_attendees < max_room_capacity)
			cout << "Meeting can be legally attended. Open seats left: " << open_seats << endl;
		else
			cout << "Meeting cannot be held as planned due to fire regulations." << endl
			<< "The max room capacity has been exceeded by " << open_seats * -1 << endl;
		
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
		
	} while (ans == 'y');
}

void Ch2_Programming_Project_6() {
	const double HOURLY_PAY = 16.78;
	const double REGULAR_HOURS = 40;
	const double union_dues = 10;
	int dependents = 0;
	double social_security_tax = 0.0, federal_income_tax = 0.0, state_income_tax = 0.0;
	double insurance_dependent = 0.0, gross_pay, net_pay = 0.0, withold = 0.0, weekly_hours = 0.0;
	char ans = ' ';
	
	do {
		weekly_hours = inputDouble("Enter hours worked in a week: ", true);
		dependents = inputInteger("Enter numnber of dependents", true);
		
		weekly_hours > REGULAR_HOURS ?
		gross_pay = (HOURLY_PAY * REGULAR_HOURS) + ((1.5 * HOURLY_PAY) * (weekly_hours - REGULAR_HOURS))
		:
		gross_pay = HOURLY_PAY * weekly_hours;
		
		social_security_tax = 0.06 * gross_pay;
		federal_income_tax = 0.14 * gross_pay;
		state_income_tax = 0.05 * gross_pay;
		
		dependents >= 3 ?
		insurance_dependent = 35
		:
		insurance_dependent = 0;
		
		withold = social_security_tax + federal_income_tax + state_income_tax + insurance_dependent + union_dues;
		net_pay = gross_pay - withold;
		
		cout << "\nThe gross pay is " << gross_pay << ".\n";
		cout << "Social Security Tax: " << social_security_tax << ".\n";
		cout << "Federal Income Tax: " << federal_income_tax << ".\n";
		cout << "State Income Tax: " << state_income_tax << ".\n";
		cout << "Union Due: " << union_dues << ".\n";
		cout << "Therefore, the net take-home pay is " << net_pay << ".\n\n";
		
		ans = inputChar("Repeat (y/n)? ", 'y', 'n');
		
	} while (ans == 'y');
}

void Ch2_Programming_Project_7(){
	double item_purchase_date = 0.0;
	double item_cost = 0.0;
	double item_inflation_rate = 0.0;
	
	item_cost = inputDouble("Cost of items ($):", true);
	item_purchase_date = inputDouble("When will these items be purchased (years)? ", true);
	item_inflation_rate = inputDouble("Inflation rate of the item (%): ", true);
	
	item_inflation_rate /= 100;
	
	for(int i = 0; i < item_purchase_date; i++)
		item_cost += item_cost * item_inflation_rate;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << endl;
	cout << "Cost: $" << item_cost << endl;
	cout << "Purchase date: " << item_purchase_date << " year(s) from now" << endl;
	cout << "Inflation rate: " << item_inflation_rate << "%" << endl;
}

void Ch2_Programming_Project_8(){
	
	//there's probably some kind of logic error somewhere
	
	double item_cost = inputDouble("Enter item cost: ", true);
	double interest_annual = inputDouble("Enter annual interest: ", true);
	double payment_monthly = inputDouble("Enter monthly payment: ", true);
	
	double debt = item_cost;
	double interest_monthly = (interest_annual/100) / 12;
	double interest = 0;
	double total_interest = 0;
	double principal = 0;
	int months = 0;
	
	while (debt > 0)
	{
		interest = debt * interest_monthly;
		debt >= payment_monthly ? principal = payment_monthly - interest : principal = debt;
		debt = debt - principal;
		months++;
		total_interest += interest;
	}
	
	cout << endl << months << " month(s) needed to pay" << endl;
}

void Ch2_Programming_Project_9(){
	int nums [] = {0};
	int pos = 0;
	int neg = 0;
	int total = 0;
	for(int i = 0; i < 10; i++){
		nums[i] = inputInteger("Enter a number: ");
		total += nums[i];
		nums[i] > 0 ? pos += nums[i] : neg += nums[i];
	}
	
	cout << "Sum of positive integers: " << pos << endl;
	cout << "Sum of negative integers: " << neg << endl;
	cout << "Total sum of integers: " << total << endl;
}

void Ch2_Programming_Project_10(){
	int nums [] = {0};
	int pos = 0;
	int neg = 0;
	int total = 0;
	for(int i = 0; i < 10; i++){
		nums[i] = inputInteger("Enter a number: ");
		total += nums[i];
		nums[i] > 0 ? pos += nums[i] : neg += nums[i];
	}
	
	double avg_pos = pos / 10;
	double avg_neg = neg / 10;
	double avg_total = total / 10;
	
	cout << "Sum of positive integers: " << pos << endl;
	cout << "Sum of negative integers: " << neg << endl;
	cout << "Total sum of integers: " << total << endl;
	
	cout << "Sum of positive integers: " << avg_pos << endl;
	cout << "Sum of negative integers: " << avg_neg << endl;
	cout << "Total sum of integers: " << avg_total << endl;
}

void Ch2_Programming_Project_11(){
	
}
