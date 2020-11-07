#include <iostream>

using namespace std;

double max(double d1, double d2){
    return d1 > d2 ? d1 : d2 > d1 ? d2 : d1;
}
double max(double d1, double d2, double d3){
    return (d1 > d2) && (d1 > d3) ? d1 : d2 > d3 ? d2 : d3;
}

void Ch4_Practice_Program_9(){
	double d1 = inputDouble("Enter a value for d1: ", true);
	double d2 = inputDouble("Enter a value for d2: ", true);
	double d3 = inputDouble("Enter a value for d3: ", true);
	cout << "Max (" << d1 << ", " << d2 << ") = " << max(d1, d2) << endl;
	cout << "Max (" << d1 << ", " << d2 << ", " << d3 << ") = " << max(d1, d2, d3) << endl;
}
