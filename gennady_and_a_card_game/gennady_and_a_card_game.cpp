#include <iostream>
#include <set>
using namespace std;

int main() {

    // TODO: set up ranks and suits such that they only contain ... 
    //       basically you messed up what ranks and suits should contain
    //       it should only have stuff from your own cards
    set<char> ranks = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
    set<char> suits = {'D', 'C', 'S', 'H'};

    string table_card;
    cin >> table_card;

    int num_cards_in_hand = 5;

    for (int i = 0; i < num_cards_in_hand; i++)
    {
        string card_in_hand;
        cin >> card_in_hand;
        char rank = card_in_hand[0];
        char suit = card_in_hand[1];
        if (ranks.find(rank) != ranks.end() or suits.find(suit) != suits.end())
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    
    return 0;
}
