#include <iostream>
#include "Chapter_3.h"
#include "../input_validation.h"

using namespace std;

const vector<string> FIRE{"Aries", "Leo", "Sagittarius"};
const vector<string> EARTH{"Taurus", "Virgo", "Capricorn"};
const vector<string> AIR{"Gemini", "Libra", "Aquarius"};
const vector<string> WATER{"Cancer", "Scorpio", "Pisces"};

void zodiac_element(vector<string> vect, int size, string astro)
{
    for (int i = 0; i < size; i++)
    {
        if (astro == vect[i])
        {
            for (int i = 0; i < size; i++)
            {
                cout << vect[i] << " ";
            }
        }
    }
}

void Ch3_Practice_Program_4()
{
    astro_sign = inputString("Enter astro sign: ", astro_sign);

    cout << "ASTRO SIGN: " << astro_sign << endl;

    cout << "You are compatible with the other ";
    zodiac_element(FIRE, FIRE.size(), astro_sign);
    zodiac_element(AIR, AIR.size(), astro_sign);
    zodiac_element(EARTH, EARTH.size(), astro_sign);
    zodiac_element(WATER, WATER.size(), astro_sign);

    cout << endl;
}
