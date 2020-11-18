#include <iostream>

using namespace std;

bool containsDigit(int number, int digit)
{
	int a = number / 100; //a is 9
	int b = (number / 10) % 10; //b is 8
	int c = number % 10; //c is 2

    return (a == digit || b == digit || c == digit))
}
void Ch4_Programming_Project_8()
{
	int temperature = inputInteger("Enter temperature: ", 1, 999);

	while (containsDigit(temperature, 1) || containsDigit(temperature, 4) || containsDigit(temperature, 7))
		temperature--;
	cout << "The smallest desired temperature is " << temperature++ << endl;

	while (containsDigit(temperature, 1) || containsDigit(temperature, 4) || containsDigit(temperature, 7))
		temperature++;
	cout << "The largest desired temperature is " << temperature-- << endl;
}