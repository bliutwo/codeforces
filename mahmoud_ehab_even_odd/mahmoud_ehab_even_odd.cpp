#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int player = 0; // 0 is M's turn, 1 is E's turn
    while (true) {
        // pick a number a to subtract from n
        if (player == 0) {
            // M's turn, so a has to be even
            // is there a positive even integer 1 <= a <= n?
        } else {
            // E's turn, so a has to be odd
        }
    }

    if (player == 0)
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;
    return 0;
}
