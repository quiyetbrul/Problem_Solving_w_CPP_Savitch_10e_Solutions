#include <iostream>

using namespace std;

double find_hat_size(double weight, double height){
	return (weight / height) * 2.9;
}
double find_jacket_size(double weight, double height, int age){
	double jacket_size = height * weight / 288;

	for (double i = 40; i <= age; i = i + 10){
		jacket_size += 0.125;
	}

	return jacket_size;
}
double find_waist_size(double weight, int age){
	double waist_size = weight / 5.7;

	for (double i = 30; i <= age; i = i + 2){
		waist_size += 0.10;
	}

	return waist_size;
}

void Ch4_Programming_Project_2(){

    double weight = inputDouble("Enter your weight in pounds: ", true);
	double height = inputDouble("Enter your height in inches: ", true);
	int age = inputInteger("Enter your age: ", true);

    double hat_size = find_hat_size(weight, height);
    double jacket_size = find_jacket_size(weight, height, age);
    double waist_size = find_waist_size(weight, age);

    cout << "Hat size: " << hat_size << endl;
    cout << "Jacket size: " << jacket_size << endl;
    cout << "Waistline: " << waist_size << endl;
}