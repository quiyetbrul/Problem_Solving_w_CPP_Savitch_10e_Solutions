#include <iostream>

using namespace std;

// this could be used for different_numbers, three_times, and sum_number
vector<int> separate_number(int number);

bool different_numbers(int number);
bool three_times(int number);
bool odd_number(int number);
int sum_number(int number);

void Ch3_Programming_Project_13(){
    // correct answer is 9738 || 9837

    int address_number = inputInteger("Guess an address number: ", 1000,9999);

    while (!different_numbers(address_number) || !three_times(address_number) || !odd_number(address_number) || sum_number(address_number) != 27){
        cout << "Sum of the guess: " << sum_number(address_number) << endl << endl;

        // just to check
        if (!different_numbers(address_number)) 
            cout << "Each digit must be unique" << endl;
        if (!three_times(address_number))
            cout << address_number << " != tens*3==thousands" << endl;
        if(!odd_number(address_number)) 
            cout << address_number << " != odd number" << endl;
        if (sum_number(address_number) != 27) 
            cout << "Sum of the guess must be 27" << endl << endl;

        cout << "Incorrect guess." << endl << endl;
        address_number = inputInteger("Guess an address number: ", 1000,9999);
    }
    
    cout << "Sum of the guess: " << sum_number(address_number) << endl;
    cout << "The correct address number: " << address_number << endl;
}

// this could be used for different_numbers, three_times, and sum_number
vector<int> separate_number(int number){
    vector<int> temp_arr;
    temp_arr[0] = (number / 100) % 10; // ones
    temp_arr[1] = (number / 10) % 10;  // tens
    temp_arr[2] = number % 10;         // hundreds
    temp_arr[3] = number / 1000;       // thousands

    return temp_arr;
}

// different_numbers is a bit wonky.
bool different_numbers(int number){
    int temp_arr[4];
    temp_arr[0] = (number / 100) % 10; // ones
    temp_arr[1] = (number / 10) % 10;  // tens
    temp_arr[2] = number % 10;         // hundreds
    temp_arr[3] = number / 1000;       // thousands

    return temp_arr[0] != temp_arr[1] != temp_arr[2] != temp_arr[3];
}

bool three_times(int number){
    // find thousands place
    int thousands = number / 1000;
    // find tens place
    int tens = (number / 10) % 10;

    return tens*3==thousands;
}

bool odd_number(int number){
    return number%2==0;
}

int sum_number(int number) {
	int sum_number = 0;
	while (number > 0) {
		sum_number += number % 10;
		number /= 10;
	}
    
	return sum_number;
}
