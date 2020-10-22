#include <iostream>

using namespace std;

double to_fahrenheit(double celsius){
    return ((9.0 / 5) * celsius) + 32;
}

void Ch3_Practice_Program_7(){

    int celsius = 100;
    int fahrenheit;

    while ((fahrenheit = to_fahrenheit(celsius)) != celsius)
        celsius--;
           
    cout << "celsius: " << celsius << endl 
         << "fahrenheit: " << fahrenheit << endl;
}