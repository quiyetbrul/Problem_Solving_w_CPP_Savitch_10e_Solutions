#include <iostream>

using namespace std;

void Ch3_Programming_Program_3()
{
	string roman;
	int letter = 0;

	int number = inputInteger("Convert a number between 1000 - 3000 to Roman Numerals: ", 1000, 3000);

	for (int i = 0; i <= number; i++)
	{
		if (number >= 1000)
		{
			letter = (number / 1000);
			for (int i = 0; i < letter; i++)
				roman += 'M';
			number %= 1000;
		}
		else if (number >= 100)
		{
			letter = (number / 100);
			if (letter == 9)
			{
				roman += "CM";
			}
			else if (letter >= 5)
			{
				roman += 'D';
				for (int i = 0; i < letter - 5; i++)
					roman += 'C';
			}
			else if (letter == 4)
			{
				roman += "CD";
			}
			else if (letter >= 1)
			{
				for (int i = 0; i < letter; i++)
					roman += 'C';
			}
			number %= 100;
		}
		else if (number >= 10)
		{
			letter = (number / 10);
			if (letter == 9)
			{
				roman += "XC";
			}
			else if (letter >= 5)
			{
				roman += 'L';
				for (int i = 0; i < letter - 5; i++)
					roman += 'X';
			}
			else if (letter == 4)
			{
				roman += "XL";
			}
			else if (letter >= 1)
			{
				for (int i = 0; i < letter; i++)
					roman += 'X';
			}
			number %= 10;
		}
		else if (number < 10)
		{
			letter = number;
			if (letter == 9)
			{
				roman += "IX";
			}
			else if (letter >= 5 && letter < 9)
			{
				roman += "V";
				for (int i = 0; i < letter - 5; i++)
				{
					roman += 'I';
				}
			}
			else if (letter == 4)
			{
				roman += "IV";
			}
			else if (letter >= 1 && letter <= 3)
			{
				for (int i = 0; i < letter; i++)
					roman += 'I';
			}
			number %= 1;
		}
	}

	cout << "Roman Numeral: " << roman << "\n";
}