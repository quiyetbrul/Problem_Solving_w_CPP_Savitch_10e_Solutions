#include <iostream>
#include <numeric>

using namespace std;

// const int S_ARRAY_SIZE = 4;

// using an array would be a lot easier.
// double get_average(double s[]){
//     // double average = 0;
//     double sum = 0;
//     return accumulate(s, s+S_ARRAY_SIZE,sum)/S_ARRAY_SIZE;
// }

void get_input(double& s1, double& s2, double& s3, double& s4){
    s1 = inputDouble("Enter S1: ");
    s2 = inputDouble("Enter S2: ");
    s3 = inputDouble("Enter S3: ");
    s4 = inputDouble("Enter S4: ");
}
void get_average(double& s1, double& s2, double& s3, double& s4, double& average){
    double sum = s1+s2+s3+s4;
    average = sum / 4;
}
void get_std_dev(double& s1, double& s2, double& s3, double& s4, double& average, double& std_dev, double &variance){
    s1-=average; s1= pow(s1,2);
    s2-=average; s2= pow(s2,2);
    s3-=average; s3= pow(s3,2);
    s4-=average; s4= pow(s4,2);

    variance = s1+s2+s3+s4;
    variance/=4;

    std_dev = sqrt(variance);
}

void get_output(double& s1, double& s2, double& s3, double& s4, double& average, double& std_dev, double &variance){
    get_input(s1, s2, s3, s4);
    get_average(s1, s2, s3, s4, average);
    get_std_dev(s1, s2, s3, s4, average, variance, std_dev);

    cout << "Standard Deviation: " << std_dev << endl;
    cout << "Variance: " << variance << endl;
    cout << "Average: " << average << endl;
    cout << "Deviations: " << s1 << ", " << s2 << ", " << s3 << ", " << s4 << endl;
}

void Ch5_Practice_Program_1(){
    char ans = ' ';
    double s1 = 0, s2 = 0, s3 = 0, s4 = 0, average = 0, variance = 0, std_dev = 0;

    do{
        get_output(s1,s2,s3,s4,average,std_dev,variance);
        ans = inputChar("Repeat? (y/n) ", 'y', 'n');
    } while (ans == 'y');
    
}