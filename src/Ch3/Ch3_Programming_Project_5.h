#include <iostream>

using namespace std;

void Ch3_Programming_Project_5(){

    double loan_amount = inputDouble("Enter loan amount: ", true);
    double interest_rate = inputDouble("Enter interest rate: ", true);
    double monthly_payment = loan_amount / 20;

    interest_rate /= 100 * 12; // 1/12 of the interest

    cout << "Monthly payment: " << monthly_payment << endl;

    double total_balance = loan_amount;
    double simple_interest = 0;
    int month = 0;

    while(total_balance > 0){
        simple_interest += interest_rate * total_balance;
        total_balance -= monthly_payment - (interest_rate * total_balance);
        month++;

        if(total_balance <= 0) total_balance = 0;

        cout << "Balance left: " << total_balance << endl;
    }

    cout << "Simple annualized interest: " << ((simple_interest * 100 * 12) / (loan_amount * month)) << endl;
}