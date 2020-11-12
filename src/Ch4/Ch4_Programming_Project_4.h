#include <iostream>

using namespace std;

void beer_song(int);
void print_lyric(string);
string tens(int);
string teens(int);
string ones(int);

void beer_song(int number){
    if(number == 10 || number > 19){
        print_lyric(tens(number));
    }else if (number >=11 && number <=19){
        print_lyric(teens(number));
    }else if (number >=1 && number <=9){
        print_lyric(ones(number));
    }else
        cout << ones(number) << " bottles of beer on the wall." << endl;
}
void print_lyric(string number){
    cout << number << " bottles of beer on the wall," << endl;
    cout << number << " bottles of beer," << endl;
    cout << "Take one down, pass it around," << endl << endl;
}
string tens(int number){
    string to_return = "";
    switch ((number / 10) % 10){
        case 1: to_return = "Ten"; break;
        case 2: to_return = "Twenty"; break;
        case 3: to_return = "Thirty"; break;
        case 4: to_return = "Fourth"; break;
        case 5: to_return = "Fifty"; break;
        case 6: to_return = "Sixty"; break;
        case 7: to_return = "Seventy"; break;
        case 8: to_return = "Eighty"; break;
        case 9: to_return = "Ninety"; break;
        default: cout << "ERROR_CH4_PROGRAMMING_PROJECT_4 : Song error" << endl; break;
    }
    return number % 10 != 0 ? to_return += ("-" + ones(number)) : to_return;
}
string teens(int number){
    string to_return = "";
    switch (number){
        case 11: to_return = "Eleven"; break;
        case 12: to_return = "Twelve"; break;
        case 13: to_return = "Thirteen"; break;
        case 14: to_return = "Fourteen"; break;
        case 15: to_return = "Fifteen"; break;
        case 16: to_return = "Sixteen"; break;
        case 17: to_return = "Seventeen"; break;
        case 18: to_return = "Eighteen"; break;
        case 19: to_return = "Nineteen"; break;
        default: cout << "ERROR_CH4_PROGRAMMING_PROJECT_4 : Song error" << endl; break;

    }
    return to_return;
}
string ones(int number){
    string to_return = " ";
    switch(number % 10){
        case 1: to_return = "One"; break;
        case 2: to_return = "Two"; break;
        case 3: to_return = "Three"; break;
        case 4: to_return = "Four"; break;
        case 5: to_return = "Five"; break;
        case 6: to_return = "Six"; break;
        case 7: to_return = "Seven"; break;
        case 8: to_return = "Eight"; break;
        case 9: to_return = "Nine"; break;
        case 0: to_return = "Zero"; break;
        default: cout << "ERROR_CH4_PROGRAMMING_PROJECT_4 : Song error" << endl; break;
    }
    return to_return;
}
void Ch4_Programming_Project_4(){
    int number = inputInteger("Enter a number: ", 0, 99);
    while(number != -1){
        beer_song(number);
        number--;
    }
}