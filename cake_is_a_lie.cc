#include <bits/stdc++.h>
using namespace std;

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    int testCases[t][3];
    for (int i = 0; i < t; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> testCases[i][j];
        }
    }
    return 0;
}
