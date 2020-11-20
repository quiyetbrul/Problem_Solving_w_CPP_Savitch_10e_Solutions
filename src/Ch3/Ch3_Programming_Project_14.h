#include <iostream>

using namespace std;

void results(int candy, int edoc, int margorp){
        cout << "resulting in" << endl
             << "\t" << candy << " candy, "
             << edoc << " Edoc, and "
             << margorp << " Margorp." << endl
             << endl;
}

void Ch3_Programming_Project_14(){
        int candy = 71, candy_to_evolve = 12, edoc = 53, margorp = 0, evolve = 0, evolve_exp = 500, exp = 0;
        int transfer[2];

        // 12 candies to evolve edoc -> margorp
        // evolution gives 1 candy back
        // evolution earns 500 exp
        // edoc/margorp transfer gives 1 candy

        while (candy > 0 && edoc > 1){
                transfer[0] = inputInteger("Transfer Edoc: ", 0, edoc);
                edoc -= transfer[0];  // transfer edoc out
                candy += transfer[0]; // each transfer gives 1 candy back

                transfer[1] = inputInteger("Transfer Margorp: ", 0, margorp);
                margorp -= transfer[1]; // transfer edoc out
                candy += transfer[1];   // each transfer gives 1 candy back

                cout << "Transfer " << transfer[0] << " Edoc and " << transfer[1] << " Margorp ";
                results(candy, edoc, margorp);

                evolve = inputInteger("Evolve Edoc: ", 0, edoc);
                candy -= (evolve * candy_to_evolve); // each evolution requires 12 candies
                exp += (evolve * evolve_exp);        // each evolution is 500exp
                edoc -= evolve;                      //evolve edoc into margorp
                margorp += evolve;                   // evolve edoc into margorp
                candy += evolve;                     // each evolution gives 1 candy back

                cout << "Evolve " << evolve << " Edoc to get " << exp << " experience points and ";
                results(candy, edoc, margorp);
        }

        cout << "Total experience points = " << exp << endl;
}