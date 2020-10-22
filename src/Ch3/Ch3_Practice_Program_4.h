#include <iostream>
#include <vector>

using namespace std;

const vector<string> FIRE{"Aries", "Leo", "Sagittarius"};
const vector<string> EARTH{"Taurus", "Virgo", "Capricorn"};
const vector<string> AIR{"Gemini", "Libra", "Aquarius"};
const vector<string> WATER{"Cancer", "Scorpio", "Pisces"};

void zodiac_element(vector<string> vect)
{
    for (int i = 0; i < vect.size(); i++)
    {
        cout << "\t" << vect[i] << endl;
    }
}

void Ch3_Practice_Program_4()
{
    Ch3_Practice_Program_3();

    cout << "You are compatible with the other water signs:" << endl;

    if (find(FIRE.begin(), FIRE.end(), astro_sign) != FIRE.end())
        zodiac_element(FIRE);
    else if (find(AIR.begin(), AIR.end(), astro_sign) != AIR.end())
        zodiac_element(AIR);
    else if (find(EARTH.begin(), EARTH.end(), astro_sign) != EARTH.end())
        zodiac_element(EARTH);
    else if (find(WATER.begin(), WATER.end(), astro_sign) != WATER.end())
        zodiac_element(WATER);

    cout << endl;
}
