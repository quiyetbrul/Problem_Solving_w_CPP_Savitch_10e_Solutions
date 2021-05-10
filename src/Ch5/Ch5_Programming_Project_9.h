#include <iostream>
#include <vector>

using namespace std;

// maybe change to struct
const vector<char> CARD_FACE{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
const vector<int> CARD_VALUE{11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10};

int random_number(int lo, int hi);

double get_human_wager(double& human_wager, double& human_money);
bool is_bust(int& card_total);

void find_winner(int& human_card_total, int& house_card_total, double& human_money, double& human_wager);

void Ch5_Programming_Project_9(){
    double human_money = 100.00;
    double human_wager = 0;
    int human_card_total = 0;
    int house_card_total = 0;
    vector<int> human_rolls;
    vector<int> house_rolls;

    // human_card_total = std::accumulate(human_rolls.begin(), human_rolls.end(), decltype(vector)::value_type(0));
    // house_card_total = std::accumulate(house_rolls.begin(), house_rolls.end(), decltype(vector)::value_type(0));

    // char ans = ' ';

    // while(human_money > 0 || ans == 'y'){
        cout << "You have $" << human_money << endl;
        get_human_wager(human_wager, human_money);

        // disregard card face.
        human_rolls.push_back(random_number(0,11));
        human_rolls.push_back(random_number(0,11));
        // int card_ptr1 = random_number(0,11), card_ptr2 = random_number(0,11);
        // cout << "Human roll: " << CARD_FACE[card_ptr1] << " " << CARD_FACE[card_ptr2] << endl;
        // human_card_total = card_ptr1 + card_ptr2;
        cout << "Human roll total: " << human_card_total << endl;
        house_card_total = random_number(1,11);
        cout << "House card: " << house_card_total << endl;

        //loop while !is_bust
        // if(human_card_total<21 || house_card_total <21) ask hit_stand
        // else find_winner
        //end loop

        //create hit_stand function
        find_winner(human_card_total, house_card_total, human_money, human_wager);

        cout << "Wager: " << human_money << endl;
    //     ans = inputChar("Play again (y/n)?: ", 'y', 'n');
    // }

    cout << endl;
}

double get_human_wager(double& human_wager, double& human_money){
    //include wager error messages, eg wager > money ? error : return
    human_wager = inputDouble("Enter wager: $", 1, human_money);
    return human_wager;
}

double get_prize(bool& isWinner, double& human_money, double& human_wager){
    return isWinner? human_money+=human_wager : human_money-=human_wager;
}

bool is_bust(int& card_total){
    return card_total > 21;
}

void find_winner(int& human_card_total, int& house_card_total, double& human_money, double& human_wager){
    // combine winning and losing statements
    if (human_card_total == 21){
        cout << "21!  HUMAN WINS" << endl;
        human_money += human_wager;
    }else if(house_card_total == 21){
        cout << "21!  HOUSE WINS" << endl;
        human_money -= human_wager;
    }else if (is_bust(house_card_total)){
        cout << "HOUSE BUST!  Human wins!" << endl;
        human_money -= human_wager;
    }else if (is_bust(human_card_total)){
        cout << "HUMAN BUST!  House wins!" << endl;
        human_money += human_wager;
    }else if (human_card_total > house_card_total){
        cout << "HUMAN > HOUSE!  Human wins!" << endl;
        human_money += human_wager;
    }else if(house_card_total > human_card_total){
        cout << "HOUSE > HUMAN! House wins!" << endl;
        human_money -= human_wager;
    }else if (house_card_total == human_card_total){
        cout << "Push!" << endl;
    }else cout << "THERE WAS AN ERROR" << endl;
}

