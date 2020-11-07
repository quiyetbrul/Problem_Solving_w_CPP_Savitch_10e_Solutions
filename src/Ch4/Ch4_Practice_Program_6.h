#include <iostream>
#include <cmath>

using namespace std;

// the value returned is the interest due
double compute_interest(double initial_balance, double monthly_interest_rate, int months_to_pay ){

    return initial_balance * pow(M_E, (monthly_interest_rate/100) * months_to_pay);
}

void Ch4_Practice_Program_6(){
    double initial_balance = inputDouble("Enter initial balance: $", true);
    double monthly_interest_rate = inputDouble("Enter monthly interest rate: %", true);
    int months_to_pay = inputInteger("Enter months to pay: ", 1, 12);

    cout << "Continuous compounding interest due: $" << compute_interest(initial_balance, monthly_interest_rate, months_to_pay) << endl;
}