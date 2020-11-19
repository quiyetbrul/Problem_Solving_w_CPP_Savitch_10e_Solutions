#include <iostream>
#include <ctime>

using namespace std;

const vector<string> TEAM{
    "Last place team",
    "Second-to-last place team",
    "Third-to-last place team",
    "Fourth-to-last place team"};

int random_number(int lo, int hi);
string draft_ball(vector<string> team, int random_number);


void Ch4_Programming_Project_9()
{
    char ans = ' ';
    do
    {
        int rand_num = random_number(1,40);
        int temp = 0;
        if(temp == rand_num) cout << "pick again" << endl;
        else{
            if(draft_ball(TEAM, rand_num) == TEAM[0]){
                cout << TEAM[0] << " picks " << rand_num;
            }else if(draft_ball(TEAM, rand_num) == TEAM[1]){
                cout << TEAM[1] << " picks " << rand_num;
            }else if(draft_ball(TEAM, rand_num) == TEAM[2]){
                cout << TEAM[2] << " picks " << rand_num;
            }else if(draft_ball(TEAM, rand_num) == TEAM[3]){
                cout << TEAM[3] << " picks " << rand_num;
            }
        }

        cout << endl;

        temp = rand_num;

        ans = inputChar("Repeat? ", 'y', 'n');
    }while (ans == 'y');
}

// takes in minimum and maximum range of numbers
// returns randomized number within given range
int random_number(int lo, int hi) {
	return rand() % (hi - lo) + lo;
}

// takes in the team and the randomized number
// returns which team is drafted
string draft_ball(vector<string> team, int random_number){
    if(random_number <=20) return team[0];
    else if (random_number >20 || random_number <=30) return team[1];
    else if(random_number >31 || random_number <=36) return team[2];
    else if(random_number>36) return team[3];
}