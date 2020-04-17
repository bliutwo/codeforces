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
            if (n > 1)
            {
                // given that, what's the best positive even integer to pick?
                if (n % 2 == 0) {
                    // if n is even, just subtract n
                    n = n - n;
                } else {
                    // if n is odd, subtract n - 1
                    n = n + 1 - n;
                }
                player = 1;
            } else {
                // can't find any that satisfy the requirements, game ends, M loses
                break;
            }
        } else {
            // E's turn, so a has to be odd
            if (n > 0)
            {
                if (n % 2 == 0) {
                    // if n is even, subtract n - 1
                    n = n + 1 - n;
                } else {
                    // if n is odd, subtract n
                    n = n - n;
                }
                player = 0;
            } else {
                // can't find any that satisfy the requirements, game ends, M loses
                break;
            }
        }
    }

    if (player == 0)
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;
    return 0;
}
