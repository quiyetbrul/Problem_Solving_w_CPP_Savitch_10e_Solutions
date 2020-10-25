#include <iostream>

using namespace std;

void Ch3_Programming_Project_4()
{
	int value, totalValue = 0;
	char cardValue = 0;
	int cardsInHand = inputInteger("Enter number of card(s) in your hand: ", 2, 5);

	for (int i = 1; i <= cardsInHand; i++)
	{
		cout << "Enter the value of card(s) [2...9, 'A', 'J', 'Q', 'K']: ";
		cin >> cardValue;
		cout << endl;

		while(!(cardValue == '2' || cardValue == '3' || cardValue == '4' || cardValue == '5' ||
				cardValue == '6' || cardValue == '7' ||cardValue == '8' || cardValue == '9' || 
				cardValue == 'A' || cardValue == 'J' || cardValue == 'Q' || cardValue == 'K')){
					
			cout << "Error. Must be between [2...9, 'A', 'J', 'Q', 'K'].\n";
			cout << "Enter the value of card(s) [2...9, 'A', 'J', 'Q', 'K']: ";
			cin >> cardValue;
			cout << endl;
		}

		//calculation
		switch (cardValue)
		{
		case '2':
			value = 2;
			totalValue += value;
			break;
		case '3':
			value = 3;
			totalValue += value;
			break;
		case '4':
			value = 4;
			totalValue += value;
			break;
		case '5':
			value = 5;
			totalValue += value;
			break;
		case '6':
			value = 6;
			totalValue += value;
			break;
		case '7':
			value = 7;
			totalValue += value;
			break;
		case '8':
			value = 8;
			totalValue += value;
			break;
		case '9':
			value = 9;
			totalValue += value;
			break;
		case 'j':
		case 'J':
			value = 10;
			totalValue += value;
			break;
		case 'q':
		case 'Q':
			value = 10;
			totalValue += value;
			break;
		case 'k':
		case 'K':
			value = 10;
			totalValue += value;
			break;
		case 'a':
		case 'A':
			if (totalValue <= 10)
			{
				value = 11;
			}
			else
			{
				value = 1;
			}
			totalValue = totalValue + value;
			break;
		}
	}

	//score
	if (totalValue <= 21)
	{
		cout << "\nTotal value of card(s) is: " << totalValue << endl;
	}
	else
	{
		cout << "\nBusted\n";
	}
}