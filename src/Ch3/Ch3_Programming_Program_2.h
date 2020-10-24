#include <iostream>
#include <cmath>

using namespace std;

void Ch3_Programming_Program_2(){
    double a = inputDouble("Enter a-value: ");
    double b = inputDouble("Enter b-value: ");
    double c = inputDouble("Enter c-value: ");
    cout << endl;

    double discriminant = 0, real_part = 0, imaginary_part = 0, x1 = 0, x2 = 0;
    discriminant = pow(b,2) - 4 * a * c;
    if(discriminant > 0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }else if (discriminant == 0){
        cout << "Roots are real and same." << endl;
        x1 = -b/(2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }else{
        real_part = -b / (2 * a);
        imaginary_part =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << real_part << "+" << imaginary_part << "i" << endl;
        cout << "x2 = " << real_part << "-" << imaginary_part << "i" << endl;
    }
}