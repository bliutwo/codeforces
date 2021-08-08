#include <bits/stdc++.h>
using namespace std;

void solve(int n, vector<int>& slices, vector<int>& times) {
    int totalTime{};
    for (int i = 0; i < slices.size(); i++) {
        int remainingMouths = n % slices[i];
        if (remainingMouths != n) {
            if (remainingMouths == 0) {
                int numPizzas = n / slices[i];
                int additionalTime = numPizzas * times[i];
                totalTime += additionalTime;
                cout << totalTime << endl;
                return;
            } else {

            }
        }
    }
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    vector<int> slices = {10, 8, 6};
    vector<int> times = {25, 20, 15};
    while (t--) {
        int n;
        cin >> n;
        solve(n, slices, times);
    }
    return 0;
}
