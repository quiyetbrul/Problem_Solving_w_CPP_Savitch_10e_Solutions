#include <iostream>

using namespace std;

void trianle_area_perimeter(double& a, double& b, double& c, double& area, double& perimeter);
void print_trianle_area_perimeter(double& a, double& b, double& c, double& area, double& perimeter);

void Ch5_Practice_Program_9(){
    double a = inputDouble("Enter length1: ", true);
    double b = inputDouble("Enter length2: ", true);
    double c = inputDouble("Enter length3: ", true);
    double area = 0, perimeter = 0;

    trianle_area_perimeter(a, b, c, area, perimeter);
}

void trianle_area_perimeter(double& a, double& b, double& c, double& area, double& perimeter){
    
    if((a+b>c) && (a+c>b) && (b+c>a)){
        perimeter = a + b + c;
        double s = perimeter / 2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        print_trianle_area_perimeter(a, b, c, area, perimeter);
    }else{
        cout << "Not a valid triangle" << endl;
    }
}

void print_trianle_area_perimeter(double& a, double& b, double& c, double& area, double& perimeter){
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}