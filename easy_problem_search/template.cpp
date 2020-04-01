#include<iostream>
using namespace std;

int main() {
    bool easy = true;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int difficulty;
        cin >> difficulty;
        if (difficulty == 1)
            easy = false;
    }
    if (easy == true)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    return 0;
}
