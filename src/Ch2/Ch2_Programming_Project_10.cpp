#include <iostream>
#include "Chapter_2.h"
#include "../input_validation.h"

using namespace std;

void Ch2_Programming_Project_10() {
	int nums[] = { 0 };
	int pos = 0;
	int neg = 0;
	int total = 0;
	for (int i = 0; i < 10; i++) {
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