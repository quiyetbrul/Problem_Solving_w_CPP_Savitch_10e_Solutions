#include <iostream>

using namespace std;

bool contains_147(int temp);
int find_minimum(int temp);
int find_maximum(int temp);

void Ch3_Programming_Project_11(){
    int temperature = inputInteger("Enter temperature: ", 0, 999);

    cout << "Initial input: " << temperature << endl;

    if(!contains_147(temperature)) cout << temperature;
    else{
        cout << "Minimum: " << find_minimum(temperature) << endl 
             << "Maximum: " << find_maximum(temperature) << endl;
    }
}

int find_minimum(int temp){
    while (contains_147(temp)){
        --temp;
    }
    return temp;
}

int find_maximum(int temp){
    while (contains_147(temp)){
        ++temp;
    }
    return temp;
}

bool contains_147(int temp){
    int temp_arr[3];

    temp_arr[0] = temp % 10;         // ones
    temp_arr[1] = (temp / 10) % 10;  // tens
    temp_arr[2] = (temp / 100) % 10; // hundreds

    return (temp_arr[2] == 1 || temp_arr[2] == 4 || temp_arr[2] == 7 ||
            temp_arr[1] == 1 || temp_arr[1] == 4 || temp_arr[1] == 7 ||
            temp_arr[0] == 1 || temp_arr[0] == 4 || temp_arr[0] == 7);
}