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

    while(!different_numbers(address_number)){
        cout << "ERROR" << endl;
        address_number = inputInteger("Guess an address number: ", 1000,9999);
    }

    // while (!different_numbers(address_number) || !three_times(address_number) || !odd_number(address_number) || sum_number(address_number) != 27){
    //     cout << "Sum of the guess: " << sum_number(address_number) << endl << endl;
    //
    //     cout << "INCORRECT GUESS." << endl;
    //
    //     // just to check
    //     if (!different_numbers(address_number))
    //         cout << "Each digit must be unique" << endl;
    //     if (!three_times(address_number))
    //         cout << address_number << " != tens*3==thousands" << endl;
    //     if(!odd_number(address_number))
    //         cout << address_number << " != odd number" << endl;
    //     if (sum_number(address_number) != 27)
    //         cout << "Sum of the guess must be 27" << endl;
    //
    //     cout << endl;
    //
    //     address_number = inputInteger("Guess an address number: ", 1000,9999);
    // }

    cout << "Sum of the guess: " << sum_number(address_number) << endl;
    cout << "The correct address number: " << address_number << endl;
}

// this could be used for different_numbers, three_times, and sum_number
// how do i use a function that returns a vector?
vector<int> separate_number(int number){
    vector<int> temp_arr = {
        (number % 10),       // ones
        (number / 10) % 10,  // tens
        (number / 100) % 10, // hundreds
        (number / 1000)      // thousands
    };

    return temp_arr;
}

// different_numbers(int number) is a bit wonky.
// should return false if there're adjacent AND non-adjacent duplicate numbers,
    // e.g. 1123, 1223, 1233, 1231, 1213, etc.
// currently returns true for non-adjacent duplicate numbers,
    // e.g. 1231
bool different_numbers(int number){
    vector<int> temp_arr = {
        (number % 10),       // ones
        (number / 10) % 10,  // tens
        (number / 100) % 10, // hundreds
        (number / 1000)      // thousands
    };
    
    auto dif = unique(temp_arr.begin(), temp_arr.end());
    return dif==temp_arr.end();
}

bool three_times(int number){
    // find thousands place
    int thousands = number / 1000;
    // find tens place
    int tens = (number / 10) % 10;

    return tens*3==thousands;
}

bool odd_number(int number){
    return number%2!=0;
}

int sum_number(int number) {
	int sum_number = 0;
	while (number > 0) {
		sum_number += number % 10;
		number /= 10;
	}
    
	return sum_number;
}
