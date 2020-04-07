#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int player = 0; // 0 is M's turn, 1 is E's turn
    while (true) {
        if (player == 0) {
            if (n % 2 == 0) {
                // pick an even a to subtract from n
                // what's the best a to pick?
            }
        } else {
            if (n % 2 != 0) {
                // pick an odd a to subtract from n
            }
        }
    }

    if (player == 0)
        cout << "Ehab" << endl;
    else
        cout << "Mahmoud" << endl;
    return 0;
}
