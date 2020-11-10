#include <iostream>

using namespace std;

double find_annual_mortgage_cost(double initial_loan_balance){
    return initial_loan_balance * .09;
}

double find_tax_savings(double initial_loan_balance){
    return initial_loan_balance * .021;
}

double find_initial_loan_balance(double house_price, double down_payment){
    return house_price-down_payment;
}

void Ch4_Programming_Project_1(){

    double initial_balance = 0, annual_morgage_cost = 0, tax_savings = 0;;
    double house_price = inputDouble("Enter house cost: ", true);
    double down_payment = inputDouble("Enter down payment: ", true);

    initial_balance = find_initial_loan_balance(house_price, down_payment);
    annual_morgage_cost = find_annual_mortgage_cost(initial_balance);
    tax_savings = find_tax_savings(initial_balance);

    cout  << "Initial balance: $" << initial_balance << endl;
    cout << "Annual after-tax cost of home ownership: $" << abs(annual_morgage_cost - tax_savings);
    cout << "Initial loan balance: $" << initial_balance << endl;
    cout << "Annual mortgage: $" << annual_morgage_cost << endl;
    cout << "Tax savings: $" << tax_savings << endl;

}
