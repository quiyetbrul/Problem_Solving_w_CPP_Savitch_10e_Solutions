#include <iostream>

using namespace std;

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

	inputString("Enter instructor's surname: ", instructor_name);
	inputString("Enter your name: ", user_name);
	inputString("Enter a food: ", food);
	inputInteger("Enter a number: ", 100, 120);
	inputString("Enter an adjective: ", adjective);
	inputString("Enter a color: ", color);
	inputString("Enter an animal: ", animal);

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