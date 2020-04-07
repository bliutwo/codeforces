#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num_ways = 0;

    for (int i = 1; i < n / 2 + 1; i++) {
        // i = num_team_leaders
        int remaining = n - i;
        if (remaining % i == 0) {
            num_ways = num_ways + 1;
        }
    }

    cout << num_ways << endl;
    return 0;
}
