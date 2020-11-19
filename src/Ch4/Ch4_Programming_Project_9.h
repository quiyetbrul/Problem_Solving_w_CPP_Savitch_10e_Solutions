#include <iostream>
#include <ctime>

using namespace std;

const vector<string> TEAM{
    "Last place team",
    "Second-to-last place team",
    "Third-to-last place team",
    "Fourth-to-last place team"
    };

int random_number(int lo, int hi);
string draft_ball(vector<string> team, int random_number);

void Ch4_Programming_Project_9()
{
    int count = 0;
    int team_count[4] = {0,0,0,0};
    string temp = "";
    do
    {
        int rand_num = random_number(1, 40);
        if (temp == draft_ball(TEAM, rand_num))
        {
            cout << "Don't be greedy, " << temp << ". Let the other teams pick.";
            count--;
        }
        else
        {
            if (draft_ball(TEAM, rand_num) == TEAM[0])
            {
                cout << TEAM[0] << " picks " << rand_num;
                temp = TEAM[0];
                team_count[0]++;
            }
            else if (draft_ball(TEAM, rand_num) == TEAM[1])
            {
                cout << TEAM[1] << " picks " << rand_num;
                temp = TEAM[1];
                team_count[1]++;
            }
            else if (draft_ball(TEAM, rand_num) == TEAM[2])
            {
                cout << TEAM[2] << " picks " << rand_num;
                temp = TEAM[2];
                team_count[2]++;
            }
            else if (draft_ball(TEAM, rand_num) == TEAM[3])
            {
                cout << TEAM[3] << " picks " << rand_num;
                temp = TEAM[3];
                team_count[3]++;
            }
        }
        cout << endl;
        count++;
    } while (count != 40);

    cout << endl;

    for(int i = 0; i < TEAM.size(); i ++){
        cout << TEAM[i] << " picked " << team_count[i] << " people." << endl;
    }
}

// takes in minimum and maximum range of numbers
// returns randomized number within given range
int random_number(int lo, int hi)
{
    return rand() % (hi - lo) + lo;
}

// takes in the team and the randomized number
// returns which team is drafted
string draft_ball(vector<string> team, int random_number)
{
    return (random_number <= 20) ? team[0] :
           (random_number <= 30) ? team[1] :
           (random_number <= 36) ? team[2] :
           (random_number > 36)  ? team[3] :
            "ERROR Ch4_Programming_Project_9: draft_ball(vector<string>, int) function";
}