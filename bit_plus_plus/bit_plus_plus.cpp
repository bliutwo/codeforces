#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long;

void solve(string s, int& finalValue) {
    if (s[1] == '+') {
        finalValue++;
    } else {
        finalValue--;
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
    int finalValue = 0;
    while (t--) {
        string s;
        cin >> s;
        solve(s, finalValue);
    }
    cout << finalValue << endl;
    return 0;
}
