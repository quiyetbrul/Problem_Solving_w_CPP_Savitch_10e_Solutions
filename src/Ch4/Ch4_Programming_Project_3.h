#include <iostream>

using namespace std;

void Ch4_Programming_Project_2();
double find_hat_size(double weight, double height);
double find_jacket_size(double weight, double height, int age);
double find_waist_size(double weight, int age);

void Ch4_Programming_Project_3(){
    double weight = inputDouble("Enter your weight in pounds: ", true);
	double height = inputDouble("Enter your height in inches: ", true);
	int age = inputInteger("Enter your age: ", true);

    double hat_size = find_hat_size(weight, height);
    double jacket_size = find_jacket_size(weight, height, age);
    double waist_size = find_waist_size(weight, age);

    cout << "Hat size: " << hat_size << endl;
    cout << "Jacket size: " << jacket_size << endl;
    cout << "Waistline: " << waist_size << endl << endl;

    cout << "After 10 years: " << endl;
    age+=10;
    cout << "Jacket size: " << jacket_size << endl;
    cout << "Waistline: " << waist_size << endl;


}