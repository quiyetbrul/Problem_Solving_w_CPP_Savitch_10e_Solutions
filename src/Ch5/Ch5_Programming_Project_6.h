#include <iostream>

using namespace std;

void shoot(bool &target_alive, double accuracy)
{
    double random = rand() % 3 * 0.99;
    random < accuracy ? target_alive = false : target_alive = true;
}
void start_duel(int n, bool &aaron_alive, bool &bob_alive, bool &charlie_alive)
{
    int win_aaron = 0,
        win_bob = 0,
        win_charlie = 0;
    double probability_aaron = 1.0 / 3,
           probability_bob = 1.0 / 2,
           probability_charlie = 1.0;

    for (int i = 0; i < n; i++)
    {
        if (aaron_alive == true)
        {
            charlie_alive == true ? 
                shoot(charlie_alive, probability_aaron) : 
                shoot(bob_alive, probability_aaron);
        }
        if (bob_alive == true)
        {
            charlie_alive == true ?
                shoot(charlie_alive, probability_bob) :
                shoot(aaron_alive, probability_bob);
        }
        if (charlie_alive == true)
        {
            bob_alive == true ?
                shoot(bob_alive, probability_charlie) :
                shoot(aaron_alive, probability_charlie);
        }

        //ANNOUNCE + SCORES//
        if (aaron_alive && !bob_alive && !charlie_alive)
        {
            cout << "Aaron won." << endl;
            win_aaron++;
        }
        else if (!aaron_alive && bob_alive && !charlie_alive)
        {
            cout << "Bob won." << endl;
            win_bob++;
        }
        else
        {
            cout << "Charlie won." << endl;
            win_charlie++;
        }
    }

    cout << endl << endl;

    cout << "Aaron's score: " << win_aaron << endl;
    cout << "Bob's score: " << win_bob << endl;
    cout << "Charlie's score: " << win_charlie << endl;
}
void Ch5_Programming_Project_6()
{
    bool aaron_alive = true;
    bool bob_alive = true;
    bool charlie_alive = true;
    start_duel(1000, aaron_alive, bob_alive, charlie_alive);
}