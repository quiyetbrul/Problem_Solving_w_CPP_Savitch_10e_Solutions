#include <iostream>


using namespace std;

void Ch1_Programming_Projects_1() {

	int integerOne, integerTwo, integerSum, integerProduct;

	cout << "Hello, human! \n" << "Please press return after entering a value.\n";

	cout << "Enter the first integer value: ";
	cin >> integerOne;
	cout << "Now, enter the second integer value: ";
	cin >> integerTwo;

	integerSum = integerOne + integerTwo;
	integerProduct = integerOne * integerTwo;

	cout << "If the first integer value is " << integerOne << " and the second value is ";
	cout << integerTwo << ", then the sum is " << integerSum << " and the product is ";
	cout << integerProduct << ".\n";

	cout << "This is the end of the program.\n";
}