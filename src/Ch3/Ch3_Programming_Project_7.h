#include <iostream>
#include <cmath>

using namespace std;

void Ch3_Programming_Project_7(){

    double x = inputDouble("Enter x-value: ");

    cout << "e^(x-value): " << exp(x) << endl;

    cout << "e^x for n = 1-100: " << endl;

    double add = 1;

    for(int i = 1; i <= 100; i++){ 
        double fact = 1;
        for(int j = i; j > 0; j--) fact = fact* j;

        add = add + pow(x, i) / fact;

        if ( i % 10 == 1) cout << endl;

        cout << add << " ";
    }

    cout << endl;
}