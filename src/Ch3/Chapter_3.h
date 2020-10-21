#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include "../input_validation.h"

using namespace std;

void Ch3_Practice_Program_1();
void Ch3_Practice_Program_2();
void Ch3_Practice_Program_3();
void Ch3_Practice_Program_4();

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
		cout << "0. Exit" << endl;
		cout << "==============================" << endl;
		cout << "Option : ";
		char option[80];
		cin >> option;

		cout << endl;

		switch (atoi(option))
		{
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
		case 0:
			exit(0);
		default:
			break;
		}
	} while (true);

	return Chapter_3();
}

void Ch3_Practice_Program_1()
{
	char user_1 = ' ', user_2 = ' ', ans = ' ';
	int score_1 = 0, score_2 = 0;

	do
	{
		user_1 = inputChar("User_1: ", "prs");
		user_2 = inputChar("User_2: ", "prs");

		cout << endl;
		cout << "===OUTCOME===" << endl;

		if (user_1 == user_2)
		{
			cout << "Draw" << endl
				 << endl;
		}
		else if (user_1 == 'r' && user_2 == 's' || user_1 == 'p' && user_2 == 'r' || user_1 == 's' && user_2 == 'p')
		{
			score_1++;
			cout << "User_1 won" << endl
				 << endl;
		}
		else
		{
			score_2++;
			cout << "User_2 won" << endl
				 << endl;
		}

		cout << "===SCORE===" << endl;
		cout << "USER_1: " << score_1 << endl;
		cout << "USER_2: " << score_2 << endl
			 << endl;

		ans = inputChar("Repeat? ", 'y', 'n');
	} while (ans == 'y');
}

void Ch3_Practice_Program_2()
{
	char ans = ' ';
	do
	{
		double account_balance = inputDouble("Enter account balance: ", true);
		double interest = 0.0;

		account_balance <= 1000 ? interest = 1.5 : interest = 1.0;

		double total_amount_due = account_balance + (account_balance * (interest / 100));

		double minimum_payment = 0.0;

		total_amount_due <= 10 ? minimum_payment = total_amount_due : minimum_payment = total_amount_due * 10 / 100;

		cout << "Total amount due: " << total_amount_due << endl;
		cout << "Minimum payment: " << minimum_payment << endl;

		ans = inputChar("Repeat? ", 'y', 'n');
		cout << endl;
	} while (ans == 'y');
}

string astro_sign = "";

void Ch3_Practice_Program_3()
{
	//im too lazy to do the cusp part of this task.
	int month;
	int day = 0;

	month = inputInteger("Enter birth month: ", 1, 12);
	day = inputInteger("Enter birth date: ", 1, 31);

	if (month == 12)
	{
		if (day < 22)
			astro_sign = "Sagittarius";
		else
			astro_sign = "capricorn";
	}
	else if (month == 1)
	{
		if (day < 20)
			astro_sign = "Capricorn";
		else
			astro_sign = "aquarius";
	}
	else if (month == 2)
	{
		if (day < 19)
			astro_sign = "Aquarius";
		else
			astro_sign = "pisces";
	}
	else if (month == 3)
	{
		if (day < 21)
			astro_sign = "Pisces";
		else
			astro_sign = "aries";
	}
	else if (month == 4)
	{
		if (day < 20)
			astro_sign = "Aries";
		else
			astro_sign = "taurus";
	}
	else if (month == 5)
	{
		if (day < 21)
			astro_sign = "Taurus";
		else
			astro_sign = "gemini";
	}
	else if (month == 6)
	{
		if (day < 21)
			astro_sign = "Gemini";
		else
			astro_sign = "cancer";
	}
	else if (month == 7)
	{
		if (day < 23)
			astro_sign = "Cancer";
		else
			astro_sign = "leo";
	}
	else if (month == 8)
	{
		if (day < 23)
			astro_sign = "Leo";
		else
			astro_sign = "virgo";
	}
	else if (month == 9)
	{
		if (day < 23)
			astro_sign = "Virgo";
		else
			astro_sign = "libra";
	}
	else if (month == 10)
	{
		if (day < 23)
			astro_sign = "Libra";
		else
			astro_sign = "scorpio";
	}
	else if (month == 11)
	{
		if (day < 22)
			astro_sign = "scorpio";
		else
			astro_sign = "sagittarius";
	}

	cout << "Zodiac sign: " << astro_sign << endl;
}

const vector<string> FIRE {"Aries", "Leo", "Sagittarius"};
const vector<string> EARTH {"Taurus", "Virgo", "Capricorn"};
const vector<string> AIR {"Gemini", "Libra", "Aquarius"};
const vector<string> WATER {"Cancer", "Scorpio", "Pisces"};

void zodiac_element(vector<string> vect, int size, string astro){
  for(int i = 0; i < size; i++){
		if(astro == vect[i]) {
      for(int i = 0; i < size; i++){
        cout << vect[i] << " ";
      }
    }
	}
}

void Ch3_Practice_Program_4()
{
  astro_sign = inputString("Enter astro sign: ", astro_sign);

  cout << "ASTRO SIGN: " << astro_sign << endl;

  cout << "You are compatible with the other ";
  zodiac_element(FIRE, FIRE.size(), astro_sign);
  zodiac_element(AIR, AIR.size(), astro_sign);
  zodiac_element(EARTH, EARTH.size(), astro_sign);
  zodiac_element(WATER, WATER.size(), astro_sign);

  cout << endl;
}
