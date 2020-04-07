#include <iostream>
#include <set>
using namespace std;

int main() {
    string table_card;
    cin >> table_card;

    int num_cards_in_hand = 5;

    string can_play = "NO";

    for (int i = 0; i < num_cards_in_hand; i++)
    {
        string card_in_hand;
        cin >> card_in_hand;
        char rank = card_in_hand[0];
        char suit = card_in_hand[1];
        if (card_in_hand[0] == table_card[0] or card_in_hand[1] == table_card[1])
        {
            can_play = "YES";
            break;
        }
    }

    cout << can_play << endl;
    
    return 0;
}
