#include <iostream>

using namespace std;

int absolute(int number){
    return number < 0 ? -number : number;
}
double absolute(double number){
	return number < 0 ? -number : number;
}
float absolute(float number){
	return number < 0 ? -number : number;
}
long absolute(long number){
	return number < 0 ? -number : number;
}

void Ch4_Practice_Program_8(){
	cout << "int absolute(-12) = " << absolute(static_cast<int>(-12)) << endl;

	cout << "double absolute(-58.4) = " << absolute(static_cast<double>(-58.4)) << endl;

	cout << "float absolute(-31000.56) = " << absolute(static_cast<float>(-31000.56)) << endl;

	cout << "long absolute(-31457) = " << absolute(static_cast<long>(-31457)) << endl;
}
