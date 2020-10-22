#include <iostream>

using namespace std;

void Ch2_Programming_Project_9() {
	int nums[] = { 0 };
	int pos = 0;
	int neg = 0;
	int total = 0;
	for (int i = 0; i < 10; i++) {
		nums[i] = inputInteger("Enter a number: ");
		total += nums[i];
		nums[i] > 0 ? pos += nums[i] : neg += nums[i];
	}

	cout << "Sum of positive integers: " << pos << endl;
	cout << "Sum of negative integers: " << neg << endl;
	cout << "Total sum of integers: " << total << endl;
}