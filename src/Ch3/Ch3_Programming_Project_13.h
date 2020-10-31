#include <iostream>
#include <set>

using namespace std;

// this could be used for different_numbers, three_times, and sum_number
int *separate_number(int number);

bool different_numbers(int number);
bool three_times(int number);
bool odd_number(int number);
int sum_number(int number);

void Ch3_Programming_Project_13(){
    // correct answer is 9837
    int address_number = inputInteger("Guess an address number: ", 1000,9999);

    while (!different_numbers(address_number) || !three_times(address_number) || !odd_number(address_number) || sum_number(address_number) != 27){
        cout << "Sum of the guess: " << sum_number(address_number) << endl << endl;
    
        cout << "INCORRECT GUESS." << endl;
    
        // just to check
        if (!different_numbers(address_number))
            cout << "Each digit must be unique" << endl;
        if (!three_times(address_number))
            cout << address_number << " != tens*3==thousands" << endl;
        if(!odd_number(address_number))
            cout << address_number << " != odd number" << endl;
        if (sum_number(address_number) != 27)
            cout << "Sum of the guess must be 27" << endl;
    
        cout << endl;
    
        address_number = inputInteger("Guess an address number: ", 1000,9999);
    }

    cout << "Sum of the guess: " << sum_number(address_number) << endl;
    cout << "The correct address number: " << address_number << endl;
}

// this could be used for different_numbers, three_times, and sum_number
// how do i use a function that returns a static array?
int *separate_number(int number){
    static int temp_arr[4] = {
        (number % 10),       // ones
        (number / 10) % 10,  // tens
        (number / 100) % 10, // hundreds
        (number / 1000)      // thousands
    };

    return temp_arr;
}

bool different_numbers(int number){  
    int temp_arr[4] = {
        (number % 10),       // ones
        (number / 10) % 10,  // tens
        (number / 100) % 10, // hundreds
        (number / 1000)      // thousands
    };
    // int *temp_arr = separate_number(number);
    return set<int>( temp_arr, temp_arr+4 ).size() == 4;
}

bool three_times(int number){
    int thousands = number / 1000;
    int tens = (number / 10) % 10;
    return tens*3==thousands;

    // int *temp_arr = separate_number(number);
    // return *(temp_arr + 1) * 3 == *(temp_arr + 3);
}

bool odd_number(int number){
    return number%2!=0;
}

int sum_number(int number) {
	int sum_number = 0;
    while (number > 0){
        sum_number += number % 10;
		number /= 10;
    }

    // int *temp_arr = separate_number(number);
    // for(int i = 0; i < 4; i++) sum_number += *(temp_arr + i);
    
	return sum_number;
}
