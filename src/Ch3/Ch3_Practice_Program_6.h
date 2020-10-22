#include <iostream>

using namespace std;

void Ch3_Practice_Program_6(){

    const double y = 62/4;

    double sphere_weight = inputDouble("Enter sphere weight (lb): ", true);
    double sphere_radius = inputDouble("Enter sphere radius (ft): ", true);

    double sphere_volume = (4/3) * M_PI * pow(sphere_radius,3);
    double FB = sphere_volume * y;
    cout << "Sphere volume: " << sphere_volume << endl;

    if(FB >= sphere_weight) cout << "The sphere will float" << endl;
    else cout << "The sphere will sink" << endl;

}
