#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

// maybe change to struct and create a multi-typed array
// const vector<char> CARD_FACE{'A', '2', '3', '4', '5', '6', '7', '8', '9', 'J', 'Q', 'K'};
const vector<int> CARD_VALUE{11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10};

int random_number(int lo, int hi);
double get_human_wager(double& human_wager, double& human_money);
bool is_bust(int& card_total);
void find_winner(int& human_card_total, int& house_card_total, double& human_money, double& human_wager);
void show_cards(vector<int> vect, bool human_turn);
int get_total_vector(vector<int> vect, int& player_total);
void show_total(vector<int>& vector_cards, int& player_total, bool human_turn);
void one_roll(vector<int>& vector_cards, int& player_total, bool human_turn);

void Ch5_Programming_Project_9(){
    double human_money = 100;
    char ans = ' ';

    do{
        //  human_money = 100.00; //move human money into this scope if pocket money needs to reset each game
        double human_wager = 0;
        int human_cards_total = 0;
        int house_cards_total = 0;
        vector<int> human_cards;
        vector<int> house_cards;

        cout << "You have $" << human_money << endl;
        get_human_wager(human_wager, human_money);
        cout << endl;

        human_cards.push_back(random_number(1,11));
        one_roll(human_cards, human_cards_total, true);
        cout << endl;

        one_roll(house_cards, house_cards_total, false);
        cout << endl;

        if (human_cards_total >=21) find_winner(human_cards_total, house_cards_total, human_money, human_wager);
        else{
            do{
                ans = inputChar("Hit or stand (h/s)?: ", 'h', 's');
                if(ans == 'h'){
                        one_roll(human_cards, human_cards_total, true);
                        cout << endl;
                }
            }while(human_cards_total < 21 && ans == 'h');

            cout << endl;

            if (human_cards_total >=21) find_winner(human_cards_total, house_cards_total, human_money, human_wager);
            else if (house_cards_total < 17){
                while(house_cards_total < 17){
                    one_roll(house_cards, house_cards_total, false);
                    cout << endl;
                }
                find_winner(human_cards_total, house_cards_total, human_money, human_wager);
            }
        }
        cout << endl;
        cout << "Wager: " << human_money << endl;
        ans = inputChar("Play again (y/n)?: ", 'y', 'n');
        cout << endl;

    }while(human_money > 0 && ans == 'y');

    cout << endl;
}

void show_total(vector<int>& vector_cards, int& player_total, bool human_turn){
    cout << (!human_turn ? "House cards: " : "Human cards: ") << get_total_vector(vector_cards, player_total) << endl;
}
void one_roll(vector<int>& vector_cards, int& player_total, bool human_turn){
    vector_cards.push_back(random_number(1,11));
    show_cards(vector_cards, human_turn);
    show_total(vector_cards, player_total,human_turn);
}

int get_total_vector(vector<int> vect, int& player_total){
    player_total = accumulate(vect.begin(), vect.end(), decltype(vect)::value_type(0));
    return player_total;
}

void show_cards(vector<int> vect, bool human_turn){
    cout << (!human_turn ? "House cards: " : "Human cards: ");
    for(auto x : vect)  cout << x << " ";
    cout << endl;
}

double get_human_wager(double& human_wager, double& human_money){
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
    }else cout << "THERE WAS AN ERROR: find_winner()" << endl;
}

