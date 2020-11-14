#include <iostream>

using namespace std;

void Ch4_Programming_Project_6(){
    cout << "Deep-fried Twinkie - $3.50" << endl;
    const double TWINKIE_PRICE = 3.50;
    double insert_money = 0;
    double total = 0;
    double balance = 0;

    // 1.00, 0.25, 0.10, 0.05
    while(total < TWINKIE_PRICE){
        insert_money = inputDouble("Enter money: $", true);
        if(insert_money == 1 || insert_money == 0.25 || insert_money == 0.10 || insert_money == 0.05){
            total += insert_money;
            balance = TWINKIE_PRICE - total;
            cout << "Total money inserted: $" << total << endl;
            if (balance >= 0) cout << "Balance left: $" << balance << endl << endl;
        }
        else cout << "ERROR : Insert money that's $1.00, $0.25, $0.10, $0.05" << endl;
    }

    cout << endl;

    if(total > TWINKIE_PRICE){
        total-=TWINKIE_PRICE;
        cout << "Change: $" << total << endl;
    }
    cout << "Successfully purchased: Deep-fried Twinkie" << endl;
}