#include <bits/stdc++.h>
using namespace std;

int maxInteger(int n, unordered_map<int, int>& m) {
    if (n == 1) return 0;
    int result = n;
    n--;
    result &= n;
    while (result > 0) {
        n--;
        result &= n;
    }
    return n;
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    int t;
    cin >> t;
    int testCases[t];
    for (int i = 0; i < t; i++) {
        cin >> testCases[i];
    }
    unordered_map<int, int> m;
    for (int i = 0; i < t; i++) {
        cout << maxInteger(testCases[i], m) << "\n";
    }
    return 0;
}
