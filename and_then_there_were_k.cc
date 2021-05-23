#include <bits/stdc++.h>
using namespace std;

int maxInteger(int n, int result, unordered_map<int, int>& m) {
    if (result == 2) return 1;
    if (result == 1) return 0;
    if (m.find(n) != m.end()) return m[n];
    if (result == 0) return n;
    int ans = maxInteger(n - 1, result & (n-1), m);
    m[n] = ans;
    return ans;
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
        cout << maxInteger(testCases[i], testCases[i], m) << "\n";
    }
    return 0;
}
