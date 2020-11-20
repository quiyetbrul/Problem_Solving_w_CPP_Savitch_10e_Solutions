#include <iostream>

using namespace std;

const int EVOLVE_EXP = 500;
const int CANDY_TO_EVOLVE = 12;

// 12 candies to evolve edoc -> margorp
// evolution gives 1 candy back
// evolution earns 500 exp
// edoc/margorp transfer gives 1 candy

// takes in number of candies, edocs, margorps
// returns the total max_exp
int get_exp(int candy, int edoc, int margorp){
    int exp = 0;
    double times_to_evolve = 0;

    while (true)
    {
        if (candy >= 12)
        {
            candy += margorp; // each transfer gives 1 candy back
            // margorp = 0; // all margorps have been transferred in exchange of candies // turns out to be redundant
            times_to_evolve = candy / CANDY_TO_EVOLVE;    // gives how many times user can evolve
            edoc -= times_to_evolve;                      // evolve the edoc
            candy += times_to_evolve;                     // evolution gives 1 candy back
            margorp = times_to_evolve;                    // edoc evolves into margorp // this makes margorp = 0 line redundant
            candy -= (times_to_evolve * CANDY_TO_EVOLVE); // take out the candies used
            exp += (EVOLVE_EXP * times_to_evolve);        // calculate exp
            // times_to_evolve = 0; // redundant because of time_to_evolve = candy/CANDY_TO_EVOLVE line
        }
        else if (margorp >= 1)
        {
            candy += (margorp); // maximize the number of candies by transferring remaining margorp
            margorp = 0;        //
        }
        else if (edoc >= 1)
        {
            candy += (edoc - 1); // maximize the number of candies by transferring remaining edocs-1
            edoc -= (edoc - 1);  //
        }
        else
            return exp;
    }

    return exp;
}

void Ch4_Programming_Project_10(){
    int candy = inputInteger("Candies: ", true);
    int edoc = inputInteger("Edocs: ", true);
    int margorp = inputInteger("Margorps: ", true);

    if(candy < 12 || edoc <= 0)
        cout << "You can’t evolve any Edoc, catch more." << endl;
    else if (candy >= 12 && edoc > 0)
        cout << "Exp gained: " << get_exp(candy, edoc, margorp) << endl;
    else 
        cout << "You can't evolve any Edoc, catch more." << endl;
}